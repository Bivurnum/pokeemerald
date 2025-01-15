#include "global.h"
#include "battle_setup.h"
#include "bg.h"
#include "decompress.h"
#include "event_data.h"
#include "fishing_game.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "pokemon_icon.h"
#include "random.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "trainer_pokemon_sprites.h"
#include "window.h"
#include "constants/songs.h"
#include "constants/rgb.h"

#define TAG_FISHING_BAR 0x1000
#define TAG_SCORE_METER 0x1001

static void CB2_FishingGame(void);
static void Task_FishingGame(u8 taskId);
static void Task_FishingPauseUntilFadeIn(u8 taskId);
static void Task_HandleFishingGameInput(u8 taskId);
static void Task_AskWantToQuit(u8 taskId);
static void Task_HandleConfirmQuitInput(u8 taskId);
static void Task_ReeledInFish(u8 taskId);
static void Task_FishGotAway(u8 taskId);
static void Task_QuitFishing(u8 taskId);
static void SpriteCB_Fishing_Bar(struct Sprite *sprite);
static void SpriteCB_FishingMonIcon(struct Sprite *sprite);
static void SpriteCB_ScoreMeterRight(struct Sprite *sprite);
static void SpriteCB_ScoreMeterMiddle(struct Sprite *sprite);
static void SpriteCB_ScoreMeterLeft(struct Sprite *sprite);

const u16 gFishingGameBG_Pal[] = INCBIN_U16("graphics/fishing_game/fishing_bg_tiles.gbapal");
const u32 gFishingGameBG_Tilemap[] = INCBIN_U32("graphics/fishing_game/fishing_bg_tiles.bin.lz");
const u32 gScoreBG_Tilemap[] = INCBIN_U32("graphics/fishing_game/score_bg_tilemap.bin.lz");
const u32 gFishingGameBG_Gfx[] = INCBIN_U32("graphics/fishing_game/fishing_bg_tiles.4bpp.lz");
const u32 gFishingBar_Gfx[] = INCBIN_U32("graphics/fishing_game/fishing_bar.4bpp.lz");
static const u16 sFishingBar_Pal[] = INCBIN_U16("graphics/fishing_game/fishing_bar.gbapal");
const u32 gScoreMeter_Gfx[] = INCBIN_U32("graphics/fishing_game/score_meter.4bpp.lz");
static const u16 sScoreMeter_Pal[] = INCBIN_U16("graphics/fishing_game/score_meter.gbapal");

/*static const struct MapPreviewScreen sMapPreviewScreenData[MPS_COUNT] = {
    [MPS_VIRIDIAN_FOREST] = {
        .mapsec = MAPSEC_VIRIDIAN_FOREST,
        .type = MPS_TYPE_FADE_IN,
        .flagId = MPS_FLAG_NULL,
        .image = IMG_VIRIDIAN_FOREST
    }
}*/

static const u16 sFishBehavior[][6] =
{
    [SPECIES_MAGIKARP] = {
        2,   // Speed
        0,   // Speed Variability
        240, // Movement Delay
        60,  // Delay Variability
        10,  // Distance
        5    // Distance Variability
    },
    [SPECIES_GOLDEEN] = {
        7,   // Speed
        3,   // Speed Variability
        480, // Movement Delay
        60,  // Delay Variability
        70,  // Distance
        10   // Distance Variability
    },
    [SPECIES_CORPHISH] = {
        10,  // Speed
        3,   // Speed Variability
        50,  // Movement Delay
        20,  // Delay Variability
        5,   // Distance
        5   // Distance Variability
    }
};

static const struct WindowTemplate sWindowTemplates[] =
{
    {
        .bg = 0,
        .tilemapLeft = 3,
        .tilemapTop = 15,
        .width = 24,
        .height = 4,
        .paletteNum = 14,
        .baseBlock = 0x0200
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sWindowTemplate_AskQuit =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 9,
    .width = 5,
    .height = 4,
    .paletteNum = 14,
    .baseBlock = 0x0260
};

static const struct BgTemplate sBgTemplates[3] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 7,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 6,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    },
};

static const u8 sTextColors[] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY};

static const struct OamData sOam_FishingBar =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_ScoreMeter =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct CompressedSpriteSheet sSpriteSheet_FishingBar[] =
{
    {
        .data = gFishingBar_Gfx,
        .size = 1024,
        .tag = TAG_FISHING_BAR
    },
    {NULL}
};

static const struct CompressedSpriteSheet sSpriteSheet_ScoreMeter[] =
{
    {
        .data = gScoreMeter_Gfx,
        .size = 1024,
        .tag = TAG_SCORE_METER
    },
    {NULL}
};

static const struct SpritePalette sSpritePalettes_FishingGame[] =
{
    {
        .data = sFishingBar_Pal,
        .tag = TAG_FISHING_BAR
    },
    {
        .data = sScoreMeter_Pal,
        .tag = TAG_SCORE_METER
    },
    {NULL},
};

static const struct SpriteTemplate sSpriteTemplate_FishingBar =
{
    .tileTag = TAG_FISHING_BAR,
    .paletteTag = TAG_FISHING_BAR,
    .oam = &sOam_FishingBar,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Fishing_Bar
};

static const struct SpriteTemplate sSpriteTemplate_ScoreMeter =
{
    .tileTag = TAG_SCORE_METER,
    .paletteTag = TAG_SCORE_METER,
    .oam = &sOam_ScoreMeter,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_ScoreMeterRight
};

static void VblankCB_FishingGame(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

// Data for Tasks
#define tFrameCounter       data[0]
#define tFishSpecies        data[1]
#define tFishIconSpriteId   data[2]
#define tBarSpriteId        data[3]
#define tSMRightSpriteId    data[4]
#define tSMMiddleSpriteId   data[5]
#define tSMLeftSpriteId     data[6]
#define tFishSpeedCounter   data[7]
#define tInitialFishSpeed   data[8]
#define tBarRightEdgePos    data[9]
#define tFishCenter         data[10]
#define tScore              data[11]
#define tFishIsMoving       data[12]
#define tPerfectCatch       data[13]
#define tPaused             data[15]

// Data for all sprites
#define sTaskId             data[0]
#define sBattleStart        data[5]

// Data for Fishing Bar sprite
#define sBarPosition        data[2]
#define sBarSpeed           data[3]
#define sBarDirection       data[4]

// Data for Mon Icon sprite
#define sFishPosition       data[1]
#define sFishSpeed          data[2]
#define sTimeToNextMove     data[3]
#define sFishDestination    data[4]
#define sFishDestInterval   data[6]
#define sFishDirection      data[7]

// Data for Score Meter sprites
#define sScoreSection       data[1]
#define sScorePosition      data[2]

void CB2_InitFishingGame(void)
{
    u8 taskId;
    u8 spriteId;

    SetVBlankCallback(NULL);

    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);

    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);

    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);

    LZ77UnCompVram(gFishingGameBG_Gfx, (void *)VRAM);
    LZ77UnCompVram(gScoreBG_Tilemap, (void *)(BG_SCREEN_ADDR(6)));
    LZ77UnCompVram(gFishingGameBG_Tilemap, (void *)(BG_SCREEN_ADDR(7)));

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    InitWindows(sWindowTemplates);

    DeactivateAllTextPrinters();
    ClearScheduledBgCopiesToVram();
    ScanlineEffect_Stop();
    ResetTasks();
    ResetSpriteData();
    ResetPaletteFade();
    FreeAllSpritePalettes();
    ResetAllPicSprites();

    LoadPalette(gFishingGameBG_Pal, BG_PLTT_ID(0), 2 * PLTT_SIZE_4BPP);
    LoadPalette(GetOverworldTextboxPalettePtr(), BG_PLTT_ID(14), PLTT_SIZE_4BPP);
    LoadUserWindowBorderGfx(0, 0x2A8, BG_PLTT_ID(13));
    LoadCompressedSpriteSheet(&sSpriteSheet_FishingBar[0]);
    LoadCompressedSpriteSheet(&sSpriteSheet_ScoreMeter[0]);
    LoadSpritePalettes(sSpritePalettes_FishingGame);
    LoadMonIconPalettes();
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);

    EnableInterrupts(DISPSTAT_VBLANK);
    SetVBlankCallback(VblankCB_FishingGame);
    SetMainCallback2(CB2_FishingGame);

    SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ | WININ_WIN0_CLR);
    SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG_ALL | WINOUT_WIN01_OBJ);
    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BG2 | BLDCNT_TGT1_BG3 | BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BD | BLDCNT_EFFECT_DARKEN);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 7);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);

    ShowBg(0);
    ShowBg(2);
    ShowBg(3);
    
    taskId = CreateTask(Task_FishingGame, 0);
    gTasks[taskId].tPaused = TRUE;
    gTasks[taskId].tPerfectCatch = TRUE;
    gTasks[taskId].tScore = STARTING_SCORE;

    // Create fishing bar sprite
    spriteId = CreateSprite(&sSpriteTemplate_FishingBar, FISHING_BAR_START_X, FISHING_BAR_Y, 2);
    gSprites[spriteId].sTaskId = taskId;
    gSprites[spriteId].sBarDirection = FISH_DIR_RIGHT;
    gTasks[taskId].tBarSpriteId = spriteId;

    // Create mon icon
    spriteId = CreateMonIcon(GetMonData(&gEnemyParty[0], MON_DATA_SPECIES), SpriteCB_FishingMonIcon, FISH_ICON_START_X, (FISHING_BAR_Y + 5), 1, GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY), FALSE);
    gSprites[spriteId].sTaskId = taskId;
    gSprites[spriteId].sFishPosition = (FISH_ICON_START_X - FISH_ICON_MIN_X) * POSITION_ADJUSTMENT;
    gSprites[spriteId].sTimeToNextMove = 60;
    gTasks[taskId].tFishSpecies = GetMonData(&gEnemyParty[0], MON_DATA_SPECIES);
    gTasks[taskId].tFishIconSpriteId = spriteId;

    // Create score meter
    spriteId = CreateSprite(&sSpriteTemplate_ScoreMeter, SCORE_SECTION_INIT_X, SCORE_SECTION_INIT_Y, 2);
    gSprites[spriteId].sTaskId = taskId;
    gSprites[spriteId].sScoreSection = SCORE_RIGHT;
    gTasks[taskId].tSMRightSpriteId = spriteId;
    
    spriteId = CreateSprite(&sSpriteTemplate_ScoreMeter, SCORE_SECTION_INIT_X, SCORE_SECTION_INIT_Y, 2);
    gSprites[spriteId].callback = SpriteCB_ScoreMeterMiddle;
    gSprites[spriteId].sTaskId = taskId;
    gSprites[spriteId].sScoreSection = SCORE_MIDDLE;
    gTasks[taskId].tSMMiddleSpriteId = spriteId;
    
    spriteId = CreateSprite(&sSpriteTemplate_ScoreMeter, SCORE_SECTION_INIT_X, SCORE_SECTION_INIT_Y, 2);
    gSprites[spriteId].callback = SpriteCB_ScoreMeterLeft;
    gSprites[spriteId].sTaskId = taskId;
    gSprites[spriteId].sScoreSection = SCORE_LEFT;
    gTasks[taskId].tSMLeftSpriteId = spriteId;
}

static void CB2_FishingGame(void)
{
    RunTasks();
    //RunTextPrinters();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void Task_FishingGame(u8 taskId)
{
    DrawStdFrameWithCustomTileAndPalette(0, FALSE, 0x2A8, 0xD);
    AddTextPrinterParameterized(0, FONT_NORMAL, gText_ReelItIn, 0, 1, 0, NULL);
    PutWindowTilemap(0);
    ScheduleBgCopyTilemapToVram(0);
    gTasks[taskId].func = Task_FishingPauseUntilFadeIn;
}

static void Task_FishingPauseUntilFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].tPaused = FALSE;
        gTasks[taskId].func = Task_HandleFishingGameInput;
    }
}

static void Task_HandleFishingGameInput(u8 taskId)
{
    //DebugPrintf ("tBarRightEdgePos = %d", gTasks[taskId].tBarRightEdgePos);
    //DebugPrintf ("tFishCenter = %d", gTasks[taskId].tFishCenter);
    //DebugPrintf ("tScore = %d", gTasks[taskId].tScore);
    gTasks[taskId].tBarRightEdgePos = (gSprites[gTasks[taskId].tBarSpriteId].sBarPosition + (FISHING_BAR_WIDTH * POSITION_ADJUSTMENT));
    gTasks[taskId].tFishCenter = (gSprites[gTasks[taskId].tFishIconSpriteId].sFishPosition + ((FISH_ICON_WIDTH / 2) * POSITION_ADJUSTMENT));

    if (gTasks[taskId].tFishCenter <= gTasks[taskId].tBarRightEdgePos && gTasks[taskId].tFishCenter >= gSprites[gTasks[taskId].tBarSpriteId].sBarPosition)
        gTasks[taskId].tScore++;
    else
    {
        gTasks[taskId].tScore -= 2;
        gTasks[taskId].tPerfectCatch = FALSE;
    }

    if (gTasks[taskId].tScore >= SCORE_MAX)
    {
        gTasks[taskId].tPaused = TRUE;
        gSprites[gTasks[taskId].tBarSpriteId].sBattleStart = TRUE;
        gSprites[gTasks[taskId].tFishIconSpriteId].sBattleStart = TRUE;
        gTasks[taskId].tFrameCounter = 0;
        gTasks[taskId].func = Task_ReeledInFish;
    }

    if (gTasks[taskId].tScore <= 0)
    {
        gTasks[taskId].tPaused = TRUE;
        gTasks[taskId].tFrameCounter = 0;
        gTasks[taskId].func = Task_FishGotAway;
    }

    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].tPaused = TRUE;
        gTasks[taskId].func = Task_AskWantToQuit;
    }

    if (!gTasks[taskId].tFishIsMoving && gTasks[taskId].tPaused == FALSE)
        gTasks[taskId].tFrameCounter++;
}

static void Task_AskWantToQuit(u8 taskId)
{
    FillWindowPixelBuffer(0, PIXEL_FILL(1));
    AddTextPrinterParameterized(0, FONT_NORMAL, gText_FishingWantToQuit, 0, 1, 0, NULL);
    ScheduleBgCopyTilemapToVram(0);
    CreateYesNoMenu(&sWindowTemplate_AskQuit, 0x2A8, 0xD, 0);
    gTasks[taskId].func = Task_HandleConfirmQuitInput;
}

static void Task_HandleConfirmQuitInput(u8 taskId)
{
    switch (Menu_ProcessInputNoWrapClearOnChoose())
    {
    case 0:  // YES
        PlaySE(SE_FLEE);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_QuitFishing;
        break;
    case 1:  // NO
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized(0, FONT_NORMAL, gText_ReelItIn, 0, 1, 0, NULL);
        gTasks[taskId].tPaused = FALSE;
        gTasks[taskId].func = Task_HandleFishingGameInput;
        break;
    }
}

static void Task_ReeledInFish(u8 taskId)
{
        RunTextPrinters();

    if (gTasks[taskId].tFrameCounter == 0)
    {
        if (gTasks[taskId].tPerfectCatch == TRUE)
            PlaySE(SE_RG_POKE_JUMP_SUCCESS);
        else
            PlaySE(SE_PIN);

        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, gText_ReeledInAPokemon, 1, 0, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
        gTasks[taskId].tFrameCounter++;
    }

    if (gTasks[taskId].tFrameCounter != 0)
    {
        if (!IsTextPrinterActive(0))
        {
        IncrementGameStat(GAME_STAT_FISHING_ENCOUNTERS);
        PlayBGM (GetCurrLocationDefaultMusic());
        BattleSetup_StartWildBattle();
        ResetAllPicSprites();
        DestroyTask(taskId);
        }
    }
}

static void Task_FishGotAway(u8 taskId)
{
    RunTextPrinters();

    if (gTasks[taskId].tFrameCounter == 0)
    {
        PlaySE(SE_FLEE);
        //DebugPrintf ("FAILURE");
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, gText_PokemonGotAway, 1, 0, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
        gTasks[taskId].tFrameCounter++;
    }

    if (gTasks[taskId].tFrameCounter == 1)
    {
        if (!IsTextPrinterActive(0))
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_QuitFishing;
        }
    }
}

static void Task_QuitFishing(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        ResetAllPicSprites();
        PlayBGM (GetCurrLocationDefaultMusic());
        SetMainCallback2(gMain.savedCallback);
        DestroyTask(taskId);
    }
}

static void SpriteCB_Fishing_Bar(struct Sprite *sprite)
{
    //DebugPrintf ("sBarPosition = %d", sprite->sBarPosition);
    if (gTasks[sprite->sTaskId].tPaused == TRUE || sprite->sBattleStart == TRUE) // Don't do anything if paused.
        goto END;

    if (JOY_NEW(A_BUTTON) || JOY_HELD(A_BUTTON)) // If the A Button is pressed.
    {
        u8 increment;

        if (sprite->sBarDirection == FISH_DIR_LEFT) // If the bar is traveling to left.
        {
            if (sprite->sBarSpeed == 0) // If the bar is not moving, switch directions.
                sprite->sBarDirection = FISH_DIR_RIGHT;
            else
                sprite->sBarSpeed--; // Decrease the bar speed.

            increment = (sprite->sBarSpeed / BAR_SPEED_MODIFIER);

            if (sprite->sBarPosition > 0 && sprite->sBarPosition > increment) // If the bar won't exceed the left edge.
                sprite->sBarPosition -= increment; // Move the bar to the left.
            else if (sprite->sBarPosition < increment)
                sprite->sBarPosition = 0; // Does not exceed left edge.
        }
        else if (sprite->sBarDirection == FISH_DIR_RIGHT) // If the bar is traveling to right.
        {
            if (sprite->sBarSpeed < FISHING_BAR_MAX_SPEED) // If the bar speed isn't at max.
                    sprite->sBarSpeed++; // Increase the bar speed.

            increment = (sprite->sBarSpeed / BAR_SPEED_MODIFIER);

            if (sprite->sBarPosition < FISHING_BAR_MAX) // If the bar isn't against the right edge.
            {
                if ((sprite->sBarPosition + increment) > FISHING_BAR_MAX) // If the bar movement would exceed the right edge.
                    sprite->sBarPosition = FISHING_BAR_MAX; // Set the bar along the right edge.
                else
                    sprite->sBarPosition += increment; // Move the bar to the right.
            }
        }
    }
    else // The A Button is not pressed.
    {
        u8 increment;
                
        if (sprite->sBarDirection == FISH_DIR_RIGHT) // If the bar is traveling to right.
        {
            if (sprite->sBarSpeed == 0 && sprite->sBarPosition != 0) // If the bar isn't moving and isn't against the left edge, switch directions.
                sprite->sBarDirection = FISH_DIR_LEFT;
            else if (sprite->sBarSpeed > 0) // If the bar is moving.
                sprite->sBarSpeed--; // Decrease the bar speed.
                
            increment = (sprite->sBarSpeed / BAR_SPEED_MODIFIER);

            if ((sprite->sBarPosition + increment) <= FISHING_BAR_MAX) // If the bar won't exceed the right edge.
                sprite->sBarPosition += increment; // Move the bar to the right.
            else
                sprite->sBarPosition = FISHING_BAR_MAX; // Set the bar along the right edge.
        }
        else if (sprite->sBarDirection == FISH_DIR_LEFT) // If the bar is traveling to left.
        {
            if (sprite->sBarSpeed < FISHING_BAR_MAX_SPEED && sprite->sBarPosition > 0) // If the bar speed isn't at max and the bar isn't against the left edge.
                sprite->sBarSpeed++; // Increase the bar speed.

            increment = (sprite->sBarSpeed / BAR_SPEED_MODIFIER);

            if (sprite->sBarPosition > 0) // If the bar isn't against the left edge.
            {
                if ((sprite->sBarPosition - increment) < 0) // If the bar movement would exceed the left edge.
                    sprite->sBarPosition = 0; // Set the bar along the left edge.
                else
                    sprite->sBarPosition -= increment; // Move the bar to the left.
            }
        }
    }

    // Does not exceed max speed.
    if (sprite->sBarSpeed > FISHING_BAR_MAX_SPEED)
        sprite->sBarSpeed = FISHING_BAR_MAX_SPEED;

    // Bounce bar off of left edge.
    if (sprite->sBarPosition == 0 && sprite->sBarDirection == FISH_DIR_LEFT && sprite->sBarSpeed > 0)
    {
        sprite->sBarDirection = FISH_DIR_RIGHT;
        sprite->sBarSpeed /= FISHING_BAR_BOUNCINESS;
    }

    // Stop bar at right edge.
    if (sprite->sBarPosition == FISHING_BAR_MAX && sprite->sBarDirection == FISH_DIR_RIGHT && sprite->sBarSpeed > 0)
        sprite->sBarSpeed = 0;

    // Set the bar sprite position.
    sprite->x = ((sprite->sBarPosition / POSITION_ADJUSTMENT) + FISHING_BAR_START_X);

    END:
}

#define sBehavior               sFishBehavior[gTasks[sprite->sTaskId].tFishSpecies]
#define s60PercentMovedRight    (sprite->sFishDestination - ((sprite->sFishDestInterval / 100) * 40))
#define s70PercentMovedRight    (sprite->sFishDestination - ((sprite->sFishDestInterval / 100) * 30))
#define s80PercentMovedRight    (sprite->sFishDestination - ((sprite->sFishDestInterval / 100) * 20))
#define s90PercentMovedRight    (sprite->sFishDestination - ((sprite->sFishDestInterval / 100) * 10))
#define s60PercentMovedLeft     (sprite->sFishDestination + ((sprite->sFishDestInterval / 100) * 40))
#define s70PercentMovedLeft     (sprite->sFishDestination + ((sprite->sFishDestInterval / 100) * 30))
#define s80PercentMovedLeft     (sprite->sFishDestination + ((sprite->sFishDestInterval / 100) * 20))
#define s90PercentMovedLeft     (sprite->sFishDestination + ((sprite->sFishDestInterval / 100) * 10))

static void SpriteCB_FishingMonIcon(struct Sprite *sprite)
{
    //DebugPrintf ("sFishIsMoving = %d", sprite->sFishIsMoving);
    //DebugPrintf ("sFishPosition = %d", sprite->sFishPosition);
    //DebugPrintf ("sFishSpeed = %d", sprite->sFishSpeed);
    //DebugPrintf ("sTimeToNextMove = %d", sprite->sTimeToNextMove);
    //DebugPrintf ("sFishDestination = %d", sprite->sFishDestination);
    //DebugPrintf ("sFishDestInterval = %d", sprite->sFishDestInterval);
    //DebugPrintf ("sFishDirection = %d", sprite->sFishDirection);
    //DebugPrintf ("tInitialFishSpeed = %d", gTasks[sprite->sTaskId].tInitialFishSpeed);
    //DebugPrintf ("tFrameCounter = %d", gTasks[sprite->sTaskId].tFrameCounter);

    if (gTasks[sprite->sTaskId].tPaused == TRUE || sprite->sBattleStart == TRUE) // Don't do anything if paused.
        goto END;

    UpdateMonIconFrame(sprite); // Animates the mon icon.

    if (gTasks[sprite->sTaskId].tFishIsMoving) // Fish is moving.
    {
        u8 increment;
                
        if (sprite->sFishDirection == FISH_DIR_RIGHT) // If the mon is moving to the right.
        {
            if (sprite->sFishPosition >= s60PercentMovedRight && gTasks[sprite->sTaskId].tFishSpeedCounter == 0) // If the mon has traveled at least 60% of the total movement distance.
            {
                if (sprite->sFishSpeed > 2)
                    sprite->sFishSpeed -= (gTasks[sprite->sTaskId].tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                gTasks[sprite->sTaskId].tFishSpeedCounter++;
            }
            else if (sprite->sFishPosition >= s70PercentMovedRight && gTasks[sprite->sTaskId].tFishSpeedCounter == 1) // If the mon has traveled at least 70% of the total movement distance.
            {
                if (sprite->sFishSpeed > 2)
                    sprite->sFishSpeed -= (gTasks[sprite->sTaskId].tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                gTasks[sprite->sTaskId].tFishSpeedCounter++;
            }
            else if (sprite->sFishPosition >= s80PercentMovedRight && gTasks[sprite->sTaskId].tFishSpeedCounter == 2) // If the mon has traveled at least 80% of the total movement distance.
            {
                if (sprite->sFishSpeed > 2)
                    sprite->sFishSpeed -= (gTasks[sprite->sTaskId].tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                gTasks[sprite->sTaskId].tFishSpeedCounter++;
            }
            else if (sprite->sFishPosition >= s90PercentMovedRight && gTasks[sprite->sTaskId].tFishSpeedCounter == 3 && sprite->sFishSpeed > 2) // If the mon has traveled at least 90% of the total movement distance.
                sprite->sFishSpeed *= 0.5; // Reduce the current fish speed by half.

            if ((sprite->sFishPosition + sprite->sFishSpeed) <= FISH_ICON_MAX_X) // If the fish position wouldn't exceed the right edge.
                sprite->sFishPosition += sprite->sFishSpeed; // Move the fish to the right.
            else
                sprite->sFishPosition = FISH_ICON_MAX_X; // Cap the position at the right edge.

            if (sprite->sFishPosition >= sprite->sFishDestination)
                gTasks[sprite->sTaskId].tFishIsMoving = FALSE; // Return to idle behavior if movement has completed.
        }
        else if (sprite->sFishDirection == FISH_DIR_LEFT) // If the mon is moving to the left.
        {
            if (sprite->sFishPosition <= s60PercentMovedLeft && gTasks[sprite->sTaskId].tFishSpeedCounter == 0) // If the mon has traveled at least 60% of the total movement distance.
            {
                if (sprite->sFishSpeed > 2)
                    sprite->sFishSpeed -= (gTasks[sprite->sTaskId].tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                gTasks[sprite->sTaskId].tFishSpeedCounter++;
            }
            else if (sprite->sFishPosition <= s70PercentMovedLeft && gTasks[sprite->sTaskId].tFishSpeedCounter == 1) // If the mon has traveled at least 70% of the total movement distance.
            {
                if (sprite->sFishSpeed > 2)
                    sprite->sFishSpeed -= (gTasks[sprite->sTaskId].tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                gTasks[sprite->sTaskId].tFishSpeedCounter++;
            }
            else if (sprite->sFishPosition <= s80PercentMovedLeft && gTasks[sprite->sTaskId].tFishSpeedCounter == 2) // If the mon has traveled at least 80% of the total movement distance.
            {
                if (sprite->sFishSpeed > 2)
                    sprite->sFishSpeed -= (gTasks[sprite->sTaskId].tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                gTasks[sprite->sTaskId].tFishSpeedCounter++;
            }
            else if (sprite->sFishPosition <= s90PercentMovedLeft && gTasks[sprite->sTaskId].tFishSpeedCounter == 3 && sprite->sFishSpeed > 2) // If the mon has traveled at least 90% of the total movement distance.
                sprite->sFishSpeed *= 0.5; // Reduce the current fish speed by half.

            if ((sprite->sFishPosition - sprite->sFishSpeed) >= FISH_ICON_MIN_X) // If the fish position wouldn't exceed the left edge.
                sprite->sFishPosition -= sprite->sFishSpeed; // Move the fish to the left.
            else
                sprite->sFishPosition = FISH_ICON_MIN_X; // Cap the position at the left edge.

            if (sprite->sFishPosition <= sprite->sFishDestination) // If movement has completed.
                gTasks[sprite->sTaskId].tFishIsMoving = FALSE; // Return to idle behavior.
        }
    }
    else // Fish is idle.
    {
        u8 rand;
        u16 leftProbability;
        u16 distance;

        if (gTasks[sprite->sTaskId].tFrameCounter == sprite->sTimeToNextMove) // Begin new movement.
        {
            u8 i;
            u16 variablility;

            gTasks[sprite->sTaskId].tFishIsMoving = TRUE;
            gTasks[sprite->sTaskId].tFrameCounter = 0;
            gTasks[sprite->sTaskId].tFishSpeedCounter = 0;

            // Set fish movement speed.
            rand = (Random() % 20);
            variablility = (Random() % sBehavior[FISH_SPEED_VARIABILITY]);
            sprite->sFishSpeed = sBehavior[FISH_SPEED];
            if (rand < 10)
                sprite->sFishSpeed -= variablility;
            else
                sprite->sFishSpeed += variablility;
            if (sprite->sFishSpeed < 1)
                sprite->sFishSpeed = 1;
            gTasks[sprite->sTaskId].tInitialFishSpeed = sprite->sFishSpeed;

            // Set time until next movement.
            rand = (Random() % 20);
            variablility = (Random() % sBehavior[FISH_DELAY_VARIABILITY]);
            sprite->sTimeToNextMove = sBehavior[FISH_MOVE_DELAY];
            for (i = 0; i < variablility; i++)
            {
                if (rand < 10)
                    sprite->sTimeToNextMove--;
                else
                    sprite->sTimeToNextMove++;
            }

            // Set movement direction. MON_ICON_AREA_MIDDLE
            leftProbability = (sprite->sFishPosition / (FISH_ICON_MAX_X / 100));
            rand = (Random() % 100);
            if (rand < leftProbability)
                sprite->sFishDirection = FISH_DIR_LEFT;
            else
                sprite->sFishDirection = FISH_DIR_RIGHT;

            // Set fish destination and interval.
            distance = sBehavior[FISH_DISTANCE];
            rand = (Random() % 20);
            variablility = (Random() % sBehavior[FISH_DIST_VARIABILITY]);
            for (i = 0; i < variablility; i++)
            {
                distance++;
            }
            distance *= POSITION_ADJUSTMENT;
            if (sprite->sFishDirection == FISH_DIR_LEFT)
            {
                sprite->sFishDestination = (sprite->sFishPosition - distance);
                if (sprite->sFishDestination < FISH_ICON_MIN_X)
                    sprite->sFishDestination = FISH_ICON_MIN_X;
                sprite->sFishDestInterval = (sprite->sFishPosition - sprite->sFishDestination);
            }
            else
            {
                sprite->sFishDestination = (sprite->sFishPosition + distance);
                if (sprite->sFishDestination > FISH_ICON_MAX_X)
                    sprite->sFishDestination = FISH_ICON_MAX_X;
                sprite->sFishDestInterval = (sprite->sFishDestination - sprite->sFishPosition);
            }
        }

        // Fish idle movement.
        rand = (Random() % 20);
        if (rand < 7) // Nudge to right.
        {
            rand = (Random() % 4);
            if ((sprite->sFishPosition + rand) > FISH_ICON_MAX_X)
                sprite->sFishPosition = FISH_ICON_MAX_X;
            else
                sprite->sFishPosition += rand;
        }
        else if (rand < 14) // Nudge to left.
        {
            rand = (Random() % 4);
            if ((sprite->sFishPosition - rand) < FISH_ICON_MIN_X)
                sprite->sFishPosition = FISH_ICON_MIN_X;
            else
                sprite->sFishPosition -= rand;
        }
    }

    // Set the fish sprite position.
    sprite->x = ((sprite->sFishPosition / POSITION_ADJUSTMENT) + FISH_ICON_MIN_X);

    END:
}

#define scorePercent    (gTasks[sprite->sTaskId].tScore / SCORE_MAX)

static void SpriteCB_ScoreMeterRight(struct Sprite *sprite)
{
    u16 percent;
    percent++;
    DebugPrintf ("percent = %d", percent);

    if (gTasks[sprite->sTaskId].tPaused == TRUE || sprite->sBattleStart == TRUE) // Don't do anything if paused.
    {
        goto END;
    }

    sprite->sScorePosition = (SCORE_AREA_WIDTH * scorePercent);

    sprite->x = (sprite->sScorePosition - SCORE_SECTION_WIDTH);
    DebugPrintf ("sScorePosition = %d", sprite->sScorePosition);
    DebugPrintf ("Sprite X = %d", sprite->x);

    END:
}

static void SpriteCB_ScoreMeterMiddle(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == TRUE || sprite->sBattleStart == TRUE) // Don't do anything if paused.
        goto END;

    END:
}

static void SpriteCB_ScoreMeterLeft(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == TRUE || sprite->sBattleStart == TRUE) // Don't do anything if paused.
        goto END;

    END:
}