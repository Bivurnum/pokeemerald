#ifndef GUARD_FISHING_GAME_H
#define GUARD_FISHING_GAME_H

// Configs
#define FISH_MINIGAME_ENABLED           TRUE    // If set to FALSE, this fishing minigame will be completely disabled.

#define MINIGAME_ON_SEPARATE_SCREEN     FALSE   // Play the minigame on its own dedicated screen instead of in the overworld.
#define DO_DOTS_GAME_BEFORE_MAIN_GAME   TRUE    // If FALSE, the fish will be hooked instantly, instead of doing the dots game.
#define PREVENT_FAILURE_IN_DOTS_GAME    TRUE    // If TRUE, the dots game cannot be failed.
#define OBSCURE_UNDISCOVERED_MONS       TRUE    // If TRUE, the Pokemon icon will be obscured if that species has not been seen in the Pokedex.
#define VAGUE_FISH_FOR_OBSCURED         FALSE   // If TRUE, uses a vague fish shape instead of a blacked out Pokemon icon when obscured.
#define OBSCURE_ALL_FISH                FALSE   // If TRUE, the Pokemon icon will always be obscured.
#define BAR_WIDTH_FROM_ROD_TYPE         TRUE    // If TRUE, sets the fishing bar width based on the type of rod used.

#define OLD_ROD_BAR_WIDTH               40   // Default pixel width of the fishing bar. Cannot be below 33 or above 64.
#define GOOD_ROD_BAR_WIDTH              50   // Fishing bar pixel width for the Good Rod. BAR_WIDTH_FROM_ROD_TYPE must be TRUE. Cannot be below 33 or above 64.
#define SUPER_ROD_BAR_WIDTH             60   // Fishing bar pixel width for the Super Rod. BAR_WIDTH_FROM_ROD_TYPE must be TRUE. Cannot be below 33 or above 64.
#define FISHING_BAR_MAX_SPEED           50   // The greater the number, the faster the bar is allowed to go.
#define FISHING_BAR_BOUNCINESS          1.3  // The greater the number, the less the bar will bounce when it hits the left side. (Decimals are encouraged, as a little goes a long way.)
#define BAR_SPEED_SLOWING               2.0  // The greater the value, the slower the bar changes speed. (Decimals are encouraged, as a little goes a long way.) (Can affect the max speed.)

#define STARTING_SCORE                  1900  // The number of points you already have when the game starts.
#define SCORE_INCREASE                  3    // The score increases by this many point every frame while the fish is within the bar.
#define SCORE_DECREASE                  5    // The score decreases by this many point every frame while the fish is outside the bar.
#define SCORE_MAX                       1920 // The number of points required to win. Must be divisible by SCORE_AREA_WIDTH.

#define FISH_FIRST_MOVE_DELAY           0.8  // Number of seconds before the fish will make its first movement.
#define FISH_ICON_HITBOX_WIDTH          12   // Width of the fish's hitbox in number of pixels.
#define FISH_SPEED_MULTIPLIER           100  // Global fish speed multiplier. It is a percent, so 50 would be half speed and 200 would be double speed.

#define RANDOM_TREASURE_CHANCE          90   // Percent chance a random treasure will spawn.
#define TREASURE_ITEM_POOL_SIZE         14   // Number of different items allowed in each minigame's treasure pool.
#define FISH_VAR_ITEM_RARITY            0    // Replace 0 with an unused Var to use it to change the rarity of the treasure item pool via scripts.
                                             // Otherwise, the rarity will be determined by the type of rod used.
                                             // This is an offset value for the table in fishing_game_treasures.h.
                                             // Eg: If the Var is set to 2, the item pool will start AFTER the second item in the table.
                                             // The value of this Var should always be less than the number of items in the table (or the item will always be Tiny Mushroom).
#define TREASURE_ITEM_COMMON_WEIGHT     50   // The percent chance the treasure item will be restricted to the lower(more common) half of the current pool.


// Fishing Bar Constants
#define BAR_SPEED_MODIFIER              (FISHING_BAR_MAX_SPEED / (FISHING_BAR_MAX_SPEED / BAR_SPEED_SLOWING))
#define FISHING_AREA_WIDTH              202  // The width of the total fishing bar area in number of pixels.
#define FISHING_BAR_Y                   102
#define FISHING_BAR_START_X             35
#define FISHING_BAR_SEGMENT_WIDTH       32
#define FISHING_BAR_WIDTH_MIN           33
#define FISHING_BAR_WIDTH_MAX           64
#define POSITION_ADJUSTMENT             10   // Multiplier to make values larger so decimal places are retained.
#define FISHING_BAR_MAX                 ((FISHING_AREA_WIDTH - FISHING_BAR_WIDTH) * POSITION_ADJUSTMENT)

// Score Meter Constants
#define SCORE_AREA_WIDTH                192  // The width of the total score meter area in number of pixels.
#define SCORE_AREA_OFFSET               24   // Position of the left edge of the score area.
#define SCORE_BAR_OFFSET                ((SCORE_SECTION_WIDTH / 2) - SCORE_AREA_OFFSET) // Sets the score position in relation to SCORE_AREA_OFFSET.
#define SCORE_INTERVAL                  (SCORE_MAX / SCORE_AREA_WIDTH)
#define SCORE_SECTION_INIT_X            ((STARTING_SCORE / SCORE_INTERVAL) - SCORE_BAR_OFFSET)
#define SCORE_SECTION_Y                 80
#define SCORE_SECTION_WIDTH             64   // The width of one score meter section sprite in number of pixels.
#define NUM_SCORE_SECTIONS              (SCORE_AREA_WIDTH / SCORE_SECTION_WIDTH)
#define NUM_COLOR_INTERVALS             64
#define SCORE_COLOR_INTERVAL            (SCORE_AREA_WIDTH / NUM_COLOR_INTERVALS)
#define SCORE_THIRD_SIZE                (SCORE_AREA_WIDTH / 3)
#define SCORE_COLOR_NUM                 12   // The color position in the palette that the score meter uses.

// Pokemon Icon Constants
#define FISH_ICON_WIDTH                 32
#define FISH_ICON_Y                     99
#define FISH_ICON_START_X               36
#define FISH_ICON_MIN_X                 26
#define FISH_ICON_MAX_X                 ((FISHING_AREA_WIDTH - ((FISH_ICON_WIDTH / 2) + 4)) * POSITION_ADJUSTMENT)
#define FISH_IDLE_NUDGE_CHANCE          60   // Percent chance per frame that the fish position value changes while idling.

// Perfect Icon Constants
#define PERFECT_SPRITE_WIDTH            32
#define PERFECT_X                       ((FISHING_BAR_START_X + FISHING_AREA_WIDTH) - PERFECT_SPRITE_WIDTH)
#define PERFECT_Y                       SCORE_SECTION_Y

// Treasure Icon Constants
#define TREASURE_TIME_GOAL              135  // Number of frames inside the fishing bar required to claim the treasure. Must be divisible by TREASURE_INCREMENT.
#define TREASURE_INCREMENT              15   // Height of full treasure score meter in pixels.
#define TREASURE_ICON_WIDTH             32
#define TREASURE_ICON_HITBOX_WIDTH      6
#define TREASURE_SPAWN_MIN              100  // Minimum number of frames before treasure can spawn.
#define TREASURE_SPAWN_MAX              200  // Maximum number of frames before treasure can spawn.
#define TREASURE_Y                      102
#define TREASURE_DEST_X                 230  // X position of the treasure icon after it is acquired.
#define TREASURE_DEST_Y                 4    // Y position of the treasure icon after it is acquired.
#define TREASURE_TILE_SIZE              4
#define TREASURE_SCORE_COLOR_INTERVAL   (TREASURE_TIME_GOAL / NUM_COLOR_INTERVALS)
#define TREASURE_SCORE_COLOR_NUM        10   // The color position in the palette that the treasure score meter uses.
#define TREASURE_POST_GAME_X            109  // X position of the treasure icon to be inside the text box after battle.
#define TREASURE_POST_GAME_Y            68  // Y position of the treasure icon to be inside the text box after battle.

// OW Constants
#define OW_FISHING_BAR_Y                22
#define OW_SCORE_SECTION_Y              0
#define OW_FISH_ICON_Y                  19
#define OW_PERFECT_Y                    (OW_SCORE_SECTION_Y + 38)
#define OW_TREASURE_Y                   22
#define OW_PAUSE_BEFORE_START           20   // Number of frames before the minigame starts.
// TODO: Consolidate OW Y constants into one global value (80).


// Sprite sheet numbers.
enum {
    FISHING_BAR,
    FISHING_BAR_RIGHT,
    SCORE_METER,
    PERFECT,
    QUESTION_MARK,
    VAGUE_FISH,
    SCORE_METER_BACKING,
    TREASURE,
    TREASURE_SCORE,
};

// Fishing bar palette values.
enum {
    INSIDE_1,
    INSIDE_2,
    INSIDE_3,
    OUTSIDE_1,
    OUTSIDE_2,
    OUTSIDE_3
};

// Affine anims for treasure sprites.
enum {
    ANIM_TREASURE_NONE,
    ANIM_TREASURE_GROW,
    ANIM_TREASURE_SHRINK,
    ANIM_TREASURE_GROW_FAST,
    ANIM_TREASURE_SHRINK_FAST
};

// Treasure state values.
enum {
    TREASURE_NOT_SPAWNED,
    TREASURE_GROWING,
    TREASURE_SPAWNED,
    TREASURE_GOT,
    TREASURE_OPEN,
    TREASURE_ITEM,
};

#define FISH_DIR_LEFT   0
#define FISH_DIR_RIGHT  1

#define SCORE_RIGHT     0
#define SCORE_MIDDLE    1
#define SCORE_LEFT      2

#define GAME_ENDED      3

#define NUM_DEFAULT_BEHAVIORS   3 // Each rod type has a default behavior.

#define ANIM_TREASURE_CLOSED    0
#define ANIM_TREASURE_OPEN      16

#define TAG_FISHING_BAR         0x1000
#define TAG_FISHING_BAR_RIGHT   0x1001
#define TAG_SCORE_METER         0x1002
#define TAG_PERFECT             0x1003
#define TAG_QUESTION_MARK       0x1004
#define TAG_VAGUE_FISH          0x1005
#define TAG_SCORE_BACKING       0x1006
#define TAG_ITEM                0x1009

struct FishValues
{
    u8 min;
    u8 max;
};

struct FishBehaviorData
{
    u16 species;
    struct FishValues speed;
    struct FishValues distance;
    struct FishValues delay;
    u8 idleMovement;
};

#define treasure_score_frame(ptr, frame) {.data = (u8 *)ptr + (TREASURE_TILE_SIZE * TREASURE_TILE_SIZE * frame * 64)/2, .size = (TREASURE_TILE_SIZE * TREASURE_TILE_SIZE * 64)/2}

void CB2_InitFishingMinigame(void);
void Task_InitOWFishingMinigame(u8 taskId);
void Task_DoReturnToFieldFishTreasure(u8 taskId);

#endif // GUARD_FISHING_GAME_H
