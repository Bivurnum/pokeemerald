#include "global.h"
#include "decompress.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "item.h"
#include "item_icon.h"
#include "main.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "constants/songs.h"

// Configs
#define ENABLE_ITEM_BALL_ANIM           TRUE
#define USE_CUSTOM_ITEM_BALL_SPRITE     TRUE
#define INPUT_TO_OPEN_ITEM_BALL         TRUE

// Constants
#define TAG_ITEM_BALL       0x1000
#define TAG_ITEM            0x1001
#define IBA_ITEM_BALL_X     109
#define IBA_ITEM_BALL_Y     71
#define ANIM_ITEM_BALL_OPEN 1
#define AFFINE_SHRINK       1
#define IS_TM_OR_HM         gSpecialVar_0x8008

static const u16 sItemBall_Pal[] = INCBIN_U16("graphics/item_ball_anim/item_ball.gbapal");
static const u32 sItemBall_Gfx[] = INCBIN_U32("graphics/item_ball_anim/item_ball.4bpp");

static void Task_DoItemBallAnim(u8 taskId);

static const struct SpriteFrameImage sPicTable_ItemBall[] =
{
    overworld_frame(sItemBall_Gfx, 2, 2, 0),
    overworld_frame(sItemBall_Gfx, 2, 2, 1),
    overworld_frame(sItemBall_Gfx, 2, 2, 2)
};

static const union AnimCmd sAnim_ItemBallClosed[] =
{
    ANIMCMD_FRAME(.imageValue = 0, .duration = 1),
    ANIMCMD_END
};

static const union AnimCmd sAnim_ItemBallOpen[] =
{
    ANIMCMD_FRAME(.imageValue = 0, .duration = 8),
    ANIMCMD_FRAME(.imageValue = 1, .duration = 10),
    ANIMCMD_FRAME(.imageValue = 2, .duration = 16),
    ANIMCMD_END
};

static const union AnimCmd * const sAnims_ItemBall[] =
{
    sAnim_ItemBallClosed,
    sAnim_ItemBallOpen
};

static const union AffineAnimCmd sAffineAnim_ItemGrow[] =
{
    AFFINEANIMCMD_FRAME(16, 16, 0, 0),
    AFFINEANIMCMD_FRAME(16, 16, 0, 15),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_ItemShrink[] =
{
    AFFINEANIMCMD_FRAME(-16, -16, 1, 15),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd * const sAffineAnims_Item[] =
{
    sAffineAnim_ItemGrow,
    sAffineAnim_ItemShrink,
};

static const struct OamData sOam_ItemBall =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_Item =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_DOUBLE,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct SpriteTemplate sSpriteTemplate_ItemBall =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_ITEM_BALL,
    .oam = &sOam_ItemBall,
    .anims = sAnims_ItemBall,
    .images = sPicTable_ItemBall,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteTemplate sSpriteTemplate_Item =
{
    .tileTag = TAG_ITEM,
    .paletteTag = TAG_ITEM,
    .oam = &sOam_Item,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = sAffineAnims_Item,
    .callback = SpriteCallbackDummy
};

static const struct SpritePalette sSpritePalette_ItemBall =
{
    .data = sItemBall_Pal,
    .tag = TAG_ITEM_BALL
};

enum ItemBallAnimTaskStates
{
    IBA_FIELD_MOVE_ANIM,
    IBA_CREATE_ITEM_BALL_SPRITE,
    IBA_OPEN_ITEM_BALL,
    IBA_CREATE_ITEM_SPRITE,
    IBA_ITEM_GROW,
    IBA_WAIT_SCRIPT,
    IBA_DESTROY_ITEM_BALL_SPRITE,
    IBA_STOP_FIELD_MOVE_ANIM,
    IBA_ITEM_SHRINK,
    IBA_WAIT_FINAL_INPUT,
    IBA_END_TASK
};

static void ResetPlayerAvatar(u8 gfxId)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];

    ObjectEventSetGraphicsId(playerObjEvent, gfxId);
    ObjectEventTurn(playerObjEvent, playerObjEvent->movementDirection);
    gSprites[gPlayerAvatar.spriteId].x2 = 0;
    gSprites[gPlayerAvatar.spriteId].y2 = 0;
}

// Task data
#define taskData            gTasks[taskId]
#define TaskState           taskData.data[0]
#define ItemID              taskData.data[1]
#define ItemBallSpriteId    taskData.data[2]
#define ItemSpriteId        taskData.data[3]
#define PlayerGFXId         taskData.data[4]
#define FrameCounter        taskData.data[5]
#define ItemBallSprite      gSprites[ItemBallSpriteId]
#define ItemSprite          gSprites[ItemSpriteId]

void DoItemBallAnim(struct ScriptContext *ctx)
{
    u8 taskId;

    gPlayerAvatar.preventStep = TRUE;
    taskId = CreateTask(Task_DoItemBallAnim, 2);
    TaskState = IBA_FIELD_MOVE_ANIM;
    ItemID = gSpecialVar_0x8004;
}

void ResumeItemBallAnim(struct ScriptContext *ctx)
{
    u8 taskId = FindTaskIdByFunc(Task_DoItemBallAnim);

    if (taskId == TASK_NONE)
    {
        ScriptContext_Enable();
        return;
    }

    TaskState++;
}

static void Task_DoItemBallAnim(u8 taskId)
{
    u8 spriteId;

    switch (TaskState)
    {
    case IBA_FIELD_MOVE_ANIM:
        FrameCounter = 0;
        PlayerGFXId = gObjectEvents[gPlayerAvatar.objectEventId].graphicsId;
        SetPlayerAvatarFieldMove();
        StartSpriteAnim(&gSprites[gPlayerAvatar.spriteId], ANIM_FIELD_MOVE);
        ObjectEventForceSetHeldMovement(&gObjectEvents[gPlayerAvatar.objectEventId], MOVEMENT_ACTION_START_ANIM_IN_DIRECTION);

        TaskState = IBA_CREATE_ITEM_BALL_SPRITE;
        break;
    case IBA_CREATE_ITEM_BALL_SPRITE:
        if (FrameCounter == 16)
        {
            struct CompressedSpritePalette spritePalette;

            spritePalette.data = GetItemIconPicOrPalette(ItemID, 1);
            spritePalette.tag = TAG_ITEM;
            LoadCompressedSpritePalette(&spritePalette);
            LoadSpritePalette(&sSpritePalette_ItemBall);
            if (USE_CUSTOM_ITEM_BALL_SPRITE == FALSE || IndexOfSpritePaletteTag(TAG_ITEM_BALL) == 0xFF)
            {
                FrameCounter = 1;
                ItemBallSpriteId = MAX_SPRITES;
                TaskState = IBA_CREATE_ITEM_SPRITE;
                break;
            }
            else
            {
                spriteId = CreateSprite(&sSpriteTemplate_ItemBall, IBA_ITEM_BALL_X, IBA_ITEM_BALL_Y, 1);
                ItemBallSpriteId = spriteId;
                FrameCounter = 1;

                TaskState = IBA_OPEN_ITEM_BALL;
                break;
            }
        }
        FrameCounter++;
        break;
    case IBA_OPEN_ITEM_BALL:
        if (!INPUT_TO_OPEN_ITEM_BALL || JOY_NEW(A_BUTTON) || JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_CLICK);
            if (ItemBallSpriteId != MAX_SPRITES)
                StartSpriteAnim(&ItemBallSprite, ANIM_ITEM_BALL_OPEN);

            TaskState = IBA_CREATE_ITEM_SPRITE;
        }
        break;
    case IBA_CREATE_ITEM_SPRITE:
        if (ItemBallSprite.animEnded || ItemBallSpriteId == MAX_SPRITES)
        {
            ScriptContext_Enable();
            if (IS_TM_OR_HM)
                PlayFanfare(FANFARE_OBTAIN_TMHM);
            else
                PlayFanfare(FANFARE_OBTAIN_ITEM);

            if (IndexOfSpritePaletteTag(TAG_ITEM) != 0xFF)
            {
                spriteId = AddCustomItemIconSprite(&sSpriteTemplate_Item, TAG_ITEM, TAG_ITEM, ItemID);
            }
            else
            {
                TaskState = IBA_WAIT_SCRIPT;
                break;
            }

            ItemSpriteId = spriteId;
            ItemSprite.x = IBA_ITEM_BALL_X;
            ItemSprite.y = IBA_ITEM_BALL_Y;
            
            TaskState = IBA_ITEM_GROW;
        }
        break;
    case IBA_ITEM_GROW:

        if (ItemSprite.affineAnimEnded)
        {
            FrameCounter = 1;
            TaskState = IBA_WAIT_SCRIPT;
            break;
        }
        if (FrameCounter % 4 == 0)
        {
            ItemSprite.x++;
        }
        if (FrameCounter % 2 == 0 || FrameCounter > 6)
        {
            ItemSprite.y--;
        }
        FrameCounter++;
        break;
    case IBA_WAIT_SCRIPT:
        break;
    case IBA_DESTROY_ITEM_BALL_SPRITE:
        if (ItemBallSpriteId != MAX_SPRITES)
            DestroySpriteAndFreeResources(&ItemBallSprite);

        ScriptContext_Enable();
            
        TaskState = IBA_STOP_FIELD_MOVE_ANIM;
        break;
    case IBA_STOP_FIELD_MOVE_ANIM:
            ObjectEventSetGraphicsId(&gObjectEvents[gPlayerAvatar.objectEventId], PlayerGFXId);
            StartSpriteAnim(&gSprites[gPlayerAvatar.spriteId], GetFaceDirectionAnimNum(DIR_SOUTH));

            if (IndexOfSpritePaletteTag(TAG_ITEM) != 0xFF)
            {
                StartSpriteAffineAnim(&ItemSprite, AFFINE_SHRINK);
            }
            else
            {
                TaskState = IBA_WAIT_FINAL_INPUT;
                break;
            }
            
            TaskState = IBA_ITEM_SHRINK;
        break;
    case IBA_ITEM_SHRINK:
        if (ItemSprite.affineAnimEnded)
        {
            DestroySpriteAndFreeResources(&ItemSprite);
            FrameCounter = 1;
            TaskState = IBA_WAIT_FINAL_INPUT;
            break;
        }
        if (FrameCounter % 2 == 0)
        {
            ItemSprite.x++;
        }
        ItemSprite.y += 2;

        FrameCounter++;
        break;
    case IBA_WAIT_FINAL_INPUT:
        if (JOY_NEW(A_BUTTON) || JOY_NEW(B_BUTTON))
            TaskState = IBA_END_TASK;

        break;
    case IBA_END_TASK:
        ResetPlayerAvatar(PlayerGFXId);
        UnlockPlayerFieldControls();
        DestroyTask(taskId);
        gPlayerAvatar.preventStep = FALSE;
        break;
    }
}

void CheckItemBallAnim(void)
{
    if (ENABLE_ITEM_BALL_ANIM)
        gSpecialVar_Result = TRUE;
    else
        gSpecialVar_Result = FALSE;
}
