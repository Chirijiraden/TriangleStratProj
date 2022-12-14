#pragma once
#include "CoreMinimal.h"
#include "ELuaSysInfo.generated.h"

UENUM(BlueprintType)
enum ELuaSysInfo {
    DummySysInfo,
    BOOL_BATTLE_START,
    BOOL_BATTLE_SETUP_START,
    BOOL_BATTLE_SETUP_RESUME,
    BOOL_BATTLE_RESUME,
    BOOL_BATTLE_END,
    BOOL_LEVEL_START,
    BOOL_LEVEL_END,
    BOOL_SUB_LEVEL_START,
    BOOL_SUB_LEVEL_END,
    BOOL_BATTLE_COMMAND_NO_CANCEL,
    BATTLE_ACTIVE_UNIT_TYPE,
    BATTLE_ACTIVE_TURN,
    STAGE_CAMERA_DEFAULT_DISTANCE,
    BATTLE_UNIT_MOVE_COUNT,
    BATTLE_UNIT_ACTION_COUNT,
    BATTLE_INTERRUPT_END_CODE,
    BATTLE_ABILITY_DOUBLE_ACTION_USING,
    BATTLE_ACTION_SIMULATION,
    BATTLE_MAIN_MENU_ENABLE_INTERRUPTION,
    BATTLE_MAIN_MENU_ENABLE_WITHDRAWAL,
    ATTACK_COMMAND_USED,
    MOVE_COMMAND_USED,
    BATTLE_STEP_FOR_SERIALIZE_COPY,
    SOMETHING_MOVED,
    IS_RELEASED_STEALTH_STATUS_EFFECT,
    STEALTH_RELEASE_WAIT_TIME,
    IS_MOVE_END_WITH_TRAP,
    IS_DEAD_AT_LAST_BOSS,
    RESEARCH_START,
    RESEARCH_RESUME,
    RESEARCH_END,
    RESEARCH_ACTION_START,
    MAP_CHANGE_DETECT,
    TALK_REPEAT_STOP,
    STAND_BY_RESUME,
    PLAY_GAME_MODE,
    IS_RUNNING_RESEARCH_GIMMICK,
    SB_BATTLE_ORGANIZE_TEAM_WAIT,
    EVENT_THROUGH_UNENTERABLECELL,
    WORLDMAP_FLOW_NOTIFY_TO_LUA,
    WORLDMAP_FLOW_NOTIFY_TO_CPP,
    WORLDMAP_FLOW_NOTIFY_NARRATION,
    WORLDMAP_NOTIFY_REFRESH_CONTROLGUIDE,
    DEBUG_AUTO_PLAY_ROUTE,
    DEBUG_SCENARIO_ANCHOR,
    TUTORIAL_TRIGGER_FAITH_UP,
    TUTORIAL_INPUT_MODE_BEFORE_TUTORIAL_FAITH_UP,
    IS_RUNNING_MAIN,
    Vote_Opinion,
    FLOW_NOTIFY_SCENARIO_PROGRESS,
    PEDDLER_CATEGORY,
    SYS_GAME_EDITION,
    SYS_NEW_GAME_START,
    SYS_GAME_ENDING_TYPE,
    SYS_GAME_DIFFICULTY,
    SYS_BATTLE_ORGANIZE,
    DISABLE_EVENT_AUTOMODE_AFTER_LOADING,
    IS_EVENT_AUTOMODE,
    BATTLE_UNIT_TURN_MOVED,
    BATTLE_UNIT_TURN_ACTED,
    MAINMENU_PROCESSING,
    SHOP_TRANSACTED_ITEM_SHOP,
    SHOP_TRANSACTED_GENERAL_STORE,
    SHOP_TRANSACTED_BLACK_SMITH,
    SHOP_TRANSACTED_ITEM_PEDDLER,
    BATTLE_UNIT_SERIES_TURN_ACTED_COUNT,
    BATTLE_MOVED_WITH_TRAP,
    EVENT_NAME = -0x1,
    NEXT_LEVEL_NAME = -0x2,
    NEXT_LEVEL_PATH = -0x3,
    NEXT_LEVELSCRIPT_PATH = -0x4,
    CURRENT_LEVEL_NAME = -0x5,
    SOUND_BGM_ID = -0x6,
    SELECT_ITEM_ID_AT_DOUBLE_ITEM_MODE = -0x7,
    PEDDLER_ACTORNAME = -0x8,
    MESSAGE_ACTORNAME = -0x9,
    PERSUASION_ACTORNAME = -0xA,
    FIND_OBJECTNAME = -0xB,
    PICK_UP_OBJECTNAME = -0xC,
    BATTLE_ACTIVE_UNIT = -0xD,
    MESSAGE_COMMAND = -0xE,
    MESSAGE_COMMAND_TAGNAME = -0xF,
    MESSAGE_COMMAND_ARGMENT = -0x10,
    LEVEL_NAME = -0x11,
    SUB_LEVEL_NAME_START = -0x12,
    SUB_LEVEL_NAME_END = -0x13,
    GAME_PROGRESS = -0x14,
    EVENT_TRIGGER_UNIT = -0x15,
    ELuaSysInfo_MAX = 0x44,
};

