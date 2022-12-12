#pragma once
#include "CoreMinimal.h"
#include "EGopDataType.generated.h"

UENUM(BlueprintType)
enum class EGopDataType : uint8 {
    GOP_PARAM,
    GOP_CONFIG_BUTTON,
    SOUND_BGM,
    SOUND_SE,
    SOUND_VOICE,
    SOUND_3DSET,
    GOP_SOUND_SEQ,
    GOP_BATTLE_INFO,
    GOP_QUEST_INFO,
    GOP_STORY_CHART,
    GOP_CHARACTER_ASSET,
    GOP_ACTOR_ASSET,
    GOP_RICHTEXTSTYLE_MAP,
    GOP_ANIMATION_ASSET,
    GOP_CURVE_ASSET,
    GOP_EFFECT_ASSET,
    GOP_CAMERA_SHAKE_ASSET,
    GOP_FORCE_FEEDBACK_ASSET,
    GOP_CHARACTER_FACE,
    GOP_CHARACTER_HISTORY,
    GOP_CHARACTER_PICTURE,
    GOP_BATTLE_PANEL,
    GOP_BATTLE_JOB,
    GOP_BATTLE_ABILITY,
    GOP_BATTLE_WEAPON,
    GOP_BATTLE_WEAPON_ABILITY_MATERIAL,
    GOP_BATTLE_WEAPON_ABILITY_TREE,
    GOP_BATTLE_ARMOR,
    GOP_BATTLE_ACCESSARY,
    GOP_BATTLE_ATTACKPARAM,
    GOP_BATTLE_CORRECTPARAM,
    GOP_BATTLE_STATUSEFFECT,
    GOP_BATTLE_STATUSEFFECTATK,
    GOP_BATTLE_BUFFEFFECT,
    GOP_BATTLE_BUFFEFFECTATK,
    GOP_BATTLE_COUNTERCONDITION,
    GOP_BATTLE_UNITPARAM,
    GOP_BATTLE_EXPLOIT,
    GOP_BATTLE_EXTRAEXPLOIT,
    GOP_BATTLE_ORDER,
    GOP_BATTLE_UNITGROWTH,
    GOP_BATTLE_MAPCFG,
    GOP_SCENARIO_TALK,
    GOP_BATTLE_WEATHER,
    GOP_BATTLE_WIND,
    GOP_UNIT_MASTER,
    GOP_ITEM_DROP,
    GOP_ITEM_PICKUP,
    GOP_ITEM_BATTLE,
    GOP_ITEM_UPGRADEMATERIAL,
    GOP_ITEM_NEGOTIATE,
    GOP_ITEM_CLASSMEDAL,
    GOP_KEY_ITEM_PICTURE,
    GOP_NOTE,
    GOP_TUTORIAL,
    GOP_UNIT_VOTEPARAM,
    GOP_VOTE_SELECTPARAM,
    GOP_VOTE_EVENTDATA,
    GOP_WORLD_ICON,
    GOP_PLACENAME_SET,
    GOP_PLACENAME,
    GOP_SHOP_LIST,
    GOP_EXCHANGE_LIST,
    GOP_ITEM_STATUS_UP,
    GOP_INFORMATION,
    GOP_BERIEF_UPLIST,
    GOP_COMMON_BTNGUIDE,
    GOP_COMMON_BTNGUIDE_STEAM,
    GOP_PICTURE,
    GOP_SELECT_PARAM,
    GOP_UI_KEYICON,
    GOP_UI_TEXTKEYICON,
    GOP_UNIT_ATTACHED_DATA,
    GOP_UNIT_ATTACHED_DATA_SET,
    GOP_OPTION,
    SOUND_ACTIONVOICE,
    SOUND_FOOTSTEP,
    GOP_STAFFROLL,
    MS06_X07_3E010,
    MS07_HDR_1P010,
    MS07_HDR_1P020,
    MS07_HDR_1P030,
    MS07_HDR_1P035,
    MS07_HDR_1P040,
    MS07_HDR_1P050,
    MS07_X08_1P010,
    MS07_X08_1P020,
    MS07_X08_1P030,
    MS07_X08_2B010,
    MS07_X08_2B015,
    MS07_X08_2B020,
    MS07_X08_3E010,
    MS07_X08_3E020,
    MS07_X09_1P010,
    MS07_X09_1P020,
    MS07_X09_1P030,
    MS07_X09_1P040,
    MS07_X09_2B010,
    MS07_X09_2B015,
    MS07_X09_2B020,
    MS07_X09_3E010,
    MS07_X09_3E020,
    MS07_X09_3E030,
    DEBUG_EMOTION,
    DEBUG_MOTION,
    TEST_X_X_010_010,
    TEST_TEXTFORBATTLE,
    MS01_X01_WD_0010,
    MS01_X01_A1_1005,
    MS01_X01_A1_0010,
    MS01_X01_BATTLE_01_BEFORE,
    MS01_X01_BATTLE_01_DRAMA,
    MS01_X01_BATTLE_01_AFTER,
    MS01_X01_WD_0020,
    MS01_X01_A1_1010,
    MS01_X01_A1_1020,
    MS01_X01_A0_0020,
    MS01_X01_A0_0030,
    MS01_X01_A1_1030,
    MS01_X01_OLD_WD_0010,
    MS01_X01_OLD_A1_0010,
    MS01_X01_OLD_BATTLE_01_BEFORE,
    MS01_X01_OLD_BATTLE_01_AFTER,
    MS01_X01_OLD_A1_1010,
    MS01_X01_OLD_A1_1020,
    MS01_X01_OLD_A0_0020,
    MS01_X01_OLD_A0_0030,
    MS01_X01_OLD_A1_1030,
    MS02_X02_WD_0010,
    MS02_X02_A1_0010,
    MS02_X02_RESEARCH_01_AFTER,
    MS02_X02_A1_0030,
    MS02_X02_A1_1010,
    MS02_X02_A0_0010,
    MS02_X02_A1_0020,
    MS02_X02_A0_0015,
    MS02_X02_HD050_010,
    MS02_X02_A0_0020,
    MS02_X02_RESEARCH_02_BEFORE,
    MS02_X02_RESEARCH_02_DRAMA,
    MS02_X02_BATTLE_01_BEFORE,
    MS02_X02_BATTLE_01_DRAMA,
    MS02_X02_BATTLE_01_AFTER_02,
    MS02_X02_BATTLE_01_AFTER_05,
    MS02_X02_BATTLE_01_AFTER_01,
    MS02_X02_BATTLE_01_AFTER_06,
    MS02_X02_BATTLE_01_AFTER_04,
    MS02_X02_BATTLE_02_DRAMA,
    MS02_X02_BATTLE_02_AFTER_01,
    MS02_X02_BATTLE_02_AFTER_02,
    MS02_X02_RESEARCH_01_DRAMA,
    MS03_H01_WD_0010,
    MS03_H01_WD_0020,
    MS03_H01_WD_0030,
    MS03_H01_A0_0010,
    MS03_H01_VOTE_START,
    MS03_H01_PERSUADE_DRAMA,
    MS03_H01_PERSUADE_RESEARCH_DRAMA,
    MS03_H01_VOTE_DRAMA,
    MS03_H01_VOTE_110,
    MS03_H01_VOTE_120,
    MS03_X03_WD_0010,
    MS03_X03_B0_0010,
    MS03_X03_B0_1010,
    MS03_X03_A0_0010,
    MS03_X03_B0_2020,
    MS03_X03_B0_2010,
    MS03_X03_RESEARCH_01_BEFORE,
    MS03_X03_BATTLE_01_BEFORE,
    MS03_X03_BATTLE_01_DRAMA,
    MS03_X03_BATTLE_01_AFTER,
    MS03_X03_B0_1020,
    MS03_X03_B0_2030,
    MS03_X03_PART_RESEARCH_01_DRAMA_01,
    MS03_X03_PART_RESEARCH_01_DRAMA_02,
    MS03_X03_RESEARCH_01_DRAMA_01,
    MS03_X03_RESEARCH_01_DRAMA_02,
    MS03_X04_WD_0010,
    MS03_X04_C0_3010,
    MS03_X04_C0_2010,
    MS03_X04_C0_0010,
    MS03_X04_RESEARCH_01_BEFORE,
    MS03_X04_RESEARCH_01_AFTER,
    MS03_X04_BATTLE_01_BEFORE,
    MS03_X04_BATTLE_01_DRAMA,
    MS03_X04_BATTLE_01_AFTER,
    MS03_X04_C0_2020,
    MS03_X04_C0_2030,
    MS03_X04_RESEARCH_01_DRAMA_01,
    MS03_X04_RESEARCH_01_DRAMA_02,
    MS04_X05_WD_0010,
    MS04_X05_A1_1010,
    MS04_X05_A1_0010,
    MS04_X05_A0_0010,
    MS04_X05_RESEARCH_01_BEFORE,
    MS04_X05_A1_1020,
    MS04_X05_B0_0010,
    MS04_X05_A1_2010,
    MS04_X05_WD_0020,
    MS04_X05_RESEARCH_02_BEFORE,
    MS04_X05_BATTLE_01_BEFORE,
    MS04_X05_BATTLE_01_DRAMA,
    MS04_X05_BATTLE_01_AFTER,
    MS04_X05_RESEARCH_01_DRAMA,
    MS04_X05_RESEARCH_02_DRAMA,
    MS05_X06_WD_0010,
    MS05_X06_A0_1010,
    MS05_X06_A1_0010,
    MS05_X06_A2_0010,
    MS05_X06_RESEARCH_01_BEFORE,
    MS05_X06_BATTLE_01_BEFORE,
    MS05_X06_BATTLE_01_DRAMA,
    MS05_X06_BATTLE_01_AFTER,
    MS05_X06_RESEARCH_01_DRAMA,
    MS06_X07_WD_0010,
    MS06_X07_A0_0010,
    MS06_X07_RESEARCH_01_BEFORE,
    MS06_X07_RESEARCH_01_DRAMA,
    MS06_X07_A3_0010,
    MS06_X07_BATTLE_01_BEFORE,
    MS06_X07_BATTLE_01_DRAMA,
    MS06_X07_BATTLE_01_AFTER,
    MS07_H01_WD_0010,
    MS07_H01_A0_0010,
    MS07_H01_A0_1020,
    MS07_H01_WD_0020,
    MS07_H01_A1_1020,
    MS07_H01_A0_1010,
    MS07_H01_A2_0010,
    MS07_H01_A3_0010,
    MS07_H01_C0_0010,
    MS07_H01_A1_1030,
    MS07_H01_A1_1040,
    MS07_H01_WD_0030,
    MS07_H01_A1_1050,
    MS07_H01_A1_0010,
    MS07_H01_VOTE_START,
    MS07_H01_VOTE_110,
    MS07_H01_VOTE_120,
    MS07_H01_PERSUADE_DRAMA,
    MS07_H01_VOTE_DRAMA,
    MS07_H01_PERSUADE_RESEARCH_DRAMA,
    MS07_X08_WD_0010,
    MS07_X08_A0_0010,
    MS07_X08_A1_0010,
    MS07_X08_A0_0020,
    MS07_X08_A2_0010,
    MS07_X08_A3_0010,
    MS07_X08_RESEARCH_01_BEFORE,
    MS07_X08_RESEARCH_01_DRAMA,
    MS07_X08_RESEARCH_01_AFTER,
    MS07_X08_BATTLE_01_BEFORE,
    MS07_X08_BATTLE_01_DRAMA,
    MS07_X08_BATTLE_01_AFTER,
    MS07_X08_BATTLE_02_AFTER,
    MS07_X08_WD_0020,
    MS07_X08_A1_0020,
    MS07_X08_A0_0030,
    MS07_X08_A2_0020,
    MS07_X08_A3_0020,
    MS07_X08_C0_0010,
    MS07_X08_A1_0030,
    MS07_X09_WD_0010,
    MS07_X09_A0_0010,
    MS07_X09_A0_0020,
    MS07_X09_A1_0010,
    MS07_X09_A1_1010,
    MS07_X09_A3_0010,
    MS07_X09_A3_0020,
    MS07_X09_RESEARCH_01_BEFORE,
    MS07_X09_WD_0020,
    MS07_X09_C0_0010,
    MS07_X09_RESEARCH_01_AFTER,
    MS07_X09_BATTLE_01_BEFORE,
    MS07_X09_BATTLE_01_DRAMA,
    MS07_X09_BATTLE_01_AFTER,
    MS07_X09_BT910_010,
    MS07_X09_A0_0030,
    MS07_X09_A1_1020,
    MS07_X09_A3_0030,
    MS07_X09_B0_0010,
    MS07_X09_A1_0020,
    MS07_X09_RESEARCH_01_DRAMA,
    MS08A_H01_WD_0010,
    MS08A_H01_A1_0010,
    MS08A_H01_C0_0010,
    MS08A_H01_VOTE_START,
    MS08A_H01_VOTE_110,
    MS08A_H01_VOTE_120,
    MS08A_H01_PERSUADE_DRAMA,
    MS08A_H01_VOTE_DRAMA,
    MS08A_H01_PERSUADE_RESEARCH_DRAMA_01,
    MS08A_H01_PERSUADE_RESEARCH_DRAMA_02,
    MS08A_X10_WD_0010,
    MS08A_X10_A2_0010,
    MS08A_X10_A0_0010,
    MS08A_X10_A1_0010,
    MS08A_X10_A1_1010,
    MS08A_X10_A1_0020,
    MS08A_X10_RESEARCH_01_BEFORE,
    MS08A_X10_RESEARCH_01_AFTER,
    MS08A_X10_A3_0010,
    MS08A_X10_BATTLE_01_BEFORE,
    MS08A_X10_BATTLE_01_DRAMA,
    MS08A_X10_BATTLE_01_AFTER,
    MS08A_X10_RESEARCH_01_DRAMA,
    MS08A_X11_WD_0010,
    MS08A_X11_A2_0010,
    MS08A_X11_A1_0010,
    MS08A_X11_A1_0020,
    MS08A_X11_BATTLE_01_BEFORE,
    MS08A_X11_BATTLE_01_DRAMA,
    MS08A_X11_BATTLE_01_AFTER,
    MS08A_X11_RESEARCH_01_DRAMA,
    MS08A_F01_WD_0010,
    MS08A_F01_A3_0010,
    MS08A_F01_A2_0010,
    MS08A_F01_WD_0020,
    MS08A_F01_C1_0010,
    MS08A_F01_A1_1020,
    MS08A_F01_A1_1010,
    MS08A_F01_A0_0010,
    MS08A_F01_A1_2010,
    MS08A_F01_A0_0020,
    MS08B_H01_WD_0010,
    MS08B_H01_A1_0010,
    MS08B_H01_A0_0010,
    MS08B_H01_A1_0020,
    MS08B_H01_C1_0010,
    MS08B_H01_WD_0020,
    MS08B_H01_A0_0020,
    MS08B_H01_VOTE_START,
    MS08B_H01_VOTE_110,
    MS08B_H01_VOTE_120,
    MS08B_H01_PERSUADE_RESEARCH_DRAMA,
    MS08B_H01_PERSUADE_DRAMA,
    MS08B_H01_VOTE_DRAMA,
    MS08B_X12_WD_0010,
    MS08B_X12_C1_0010,
    MS08B_X12_A1_0010,
    MS08B_X12_A0_0010,
    MS08B_X12_RESEARCH_01_BEFORE,
    MS08B_X12_BATTLE_01_BEFORE,
    MS08B_X12_BATTLE_01_DRAMA,
    MS08B_X12_BATTLE_01_AFTER,
    MS08B_X12_A1_1010,
    MS08B_X12_RESEARCH_01_DRAMA,
    MS08B_X13_WD_0010,
    MS08B_X13_C1_0010,
    MS08B_X13_A1_0010,
    MS08B_X13_RESEARCH_01_BEFORE,
    MS08B_X13_BATTLE_01_BEFORE,
    MS08B_X13_BATTLE_01_DRAMA,
    MS08B_X13_BATTLE_01_AFTER,
    MS08B_X13_A1_1010,
    MS08B_X13_RESEARCH_01_DRAMA,
    MS08B_F01_WD_0010,
    MS08B_F01_A1_0010,
    MS08B_F01_A1_0020,
    MS08B_F01_C1_0010,
    MS08B_F01_A0_0010,
    MS08B_F01_A0_0015,
    MS08B_F01_A0_0020,
    MS08B_F01_A1_0030,
    MS08B_F01_C1_0020,
    MS08B_F01_A0_0030,
    MS09_H01_WD_0010,
    MS09_H01_A0_0010,
    MS09_H01_A1_0020,
    MS09_H01_A1_0010,
    MS09_H01_A1_1010,
    MS09_H01_A1_0030,
    MS09_H01_A1_2010,
    MS09_H01_B0_0010,
    MS09_H01_C0_0010,
    MS09_H01_VOTE_START,
    MS09_H01_VOTE_110,
    MS09_H01_VOTE_120,
    MS09_H01_PERSUADE_DRAMA,
    MS09_H01_VOTE_DRAMA,
    MS09_H01_PERSUADE_RESEARCH_DRAMA_01,
    MS09_H01_PERSUADE_RESEARCH_DRAMA_02,
    MS09_X14_WD_0010,
    MS09_X14_A1_0010,
    MS09_X14_A1_1010,
    MS09_X14_WD_0015,
    MS09_X14_A0_0010,
    MS09_X14_RESEARCH_01_BEFORE,
    MS09_X14_RESEARCH_01_AFTER,
    MS09_X14_BATTLE_01_BEFORE,
    MS09_X14_BATTLE_01_DRAMA,
    MS09_X14_BATTLE_01_AFTER,
    MS09_X14_WD_0020,
    MS09_X14_B0_0010,
    MS09_X14_RESEARCH_01_DRAMA,
    MS09_X15_WD_0010,
    MS09_X15_C0_0010,
    MS09_X15_C0_0020,
    MS09_X15_C0_3010,
    MS09_X15_WD_0020,
    MS09_X15_C0_0030,
    MS09_X15_RESEARCH_01_BEFORE,
    MS09_X15_BATTLE_01_BEFORE,
    MS09_X15_BATTLE_01_DRAMA,
    MS09_X15_BATTLE_01_AFTER,
    MS09_X15_WD_0030,
    MS09_X15_C0_2010,
    MS09_X15_RESEARCH_01_DRAMA,
    MS10A_H01_WD_0010,
    MS10A_H01_B0_0010,
    MS10A_H01_VOTE_START,
    MS10A_H01_VOTE_110,
    MS10A_H01_VOTE_120,
    MS10A_H01_PERSUADE_DRAMA,
    MS10A_H01_VOTE_DRAMA,
    MS10A_H01_PERSUADE_RESEARCH_DRAMA,
    MS10A_X16_WD_0005,
    MS10A_X16_B0_0010,
    MS10A_X16_B0_0020,
    MS10A_X16_RESEARCH_01_BEFORE,
    MS10A_X16_RESEARCH_01_DRAMA,
    MS10A_X16_B0_1010,
    MS10A_X16_BATTLE_01_BEFORE,
    MS10A_X16_BATTLE_01_DRAMA,
    MS10A_X16_BATTLE_01_AFTER,
    MS10A_X16_B0_0030,
    MS10A_X16_WD_0010,
    MS10A_X17_WD_0005,
    MS10A_X17_B0_0010,
    MS10A_X17_B0_0020,
    MS10A_X17_B0_3010,
    MS10A_X17_C1_0010,
    MS10A_X17_B0_2010,
    MS10A_X17_BATTLE_01_BEFORE,
    MS10A_X17_BATTLE_01_DRAMA,
    MS10A_X17_BATTLE_01_AFTER,
    MS10A_X17_B0_1010,
    MS10A_X17_WD_0010,
    MS10A_F01_C1_0010,
    MS10A_F01_C0_0010,
    MS10A_F01_C0_0020,
    MS10A_F01_C0_2010,
    MS10A_F01_C0_1010,
    MS10A_F01_C0_0030,
    MS10B_H01_WD_0010,
    MS10B_H01_RESEARCH_01_BEFORE,
    MS10B_H01_RESEARCH_01_DRAMA,
    MS10B_H01_RESEARCH_01_AFTER,
    MS10B_H01_C0_1010,
    MS10B_X18_WD_0010,
    MS10B_X18_C0_0010,
    MS10B_X18_C0_2010,
    MS10B_X18_C1_0010,
    MS10B_X18_C0_0020,
    MS10B_X18_BATTLE_01_BEFORE,
    MS10B_X18_BATTLE_01_DRAMA,
    MS10B_X18_BATTLE_01_AFTER,
    MS10B_X18_C0_1010,
    MS10B_X19_WD_0010,
    MS10B_X19_C0_0010,
    MS10B_X19_C0_0020,
    MS10B_X19_C0_0030,
    MS10B_X19_C0_1010,
    MS10B_X19_BATTLE_01_BEFORE,
    MS10B_X19_BATTLE_01_DRAMA,
    MS10B_X19_BATTLE_01_AFTER,
    MS10B_X19_C0_2010,
    MS10B_F01_WD_0010,
    MS10B_F01_C0_0010,
    MS10B_F01_C0_1010,
    MS11_H01_WD_0010,
    MS11_H01_C0_0010,
    MS11_H01_RESEARCH_01_BEFORE,
    MS11_H01_RESEARCH_01_DRAMA,
    MS11_H01_A1_1010,
    MS11_H01_A0_0010,
    MS11_H01_C0_1010,
    MS11_H01_C0_0020,
    MS11_H01_WD_0020,
    MS11_H01_VOTE_START,
    MS11_H01_VOTE_110,
    MS11_H01_VOTE_120,
    MS11_H01_PERSUADE_DRAMA,
    MS11_H01_VOTE_DRAMA,
    MS11_X20_WD_0010,
    MS11_X20_C0_0010,
    MS11_X20_A1_0010,
    MS11_X20_BATTLE_01_BEFORE,
    MS11_X20_BATTLE_01_DRAMA,
    MS11_X20_BATTLE_01_AFTER,
    MS11_X20_A1_1010,
    MS11_X20_A1_1020,
    MS11_X21_WD_0010,
    MS11_X21_A1_0010,
    MS11_X21_A1_2010,
    MS11_X21_C0_0010,
    MS11_X21_BATTLE_01_BEFORE,
    MS11_X21_BATTLE_01_DRAMA,
    MS11_X21_BATTLE_01_AFTER,
    MS11_X21_A1_2020,
    MS11_X21_WD_0020,
    MS11_X21_RESEARCH_01_BEFORE,
    MS11_X21_RESEARCH_01_DRAMA,
    MS11_X21_A1_2030,
    MS11_F01_A1_0010,
    MS11_F01_A1_0020,
    MS11_F01_WD_0010,
    MS11_F01_A1_0030,
    MS11_F01_C0_0010,
    MS11_F01_C0_0020,
    MS11_F01_C0_1010,
    MS11_F01_C0_1020,
    MS11_F01_C0_1030,
    MS11_F02_A1_0010,
    MS11_F02_WD_0010,
    MS11_F02_A1_0020,
    MS11_F02_WD_0020,
    MS11_F02_A0_0010,
    MS12_H01_WD_0010,
    MS12_H01_A1_0010,
    MS12_H01_A1_0015,
    MS12_H01_A1_0020,
    MS12_H01_A1_0030,
    MS12_H01_A1_0040,
    MS12_H01_A0_0010,
    MS12_H01_VOTE_START,
    MS12_H01_VOTE_110,
    MS12_H01_VOTE_120,
    MS12_H01_VOTE_130,
    MS12_X22_WD_0005,
    MS12_X22_BATTLE_01_BEFORE,
    MS12_X22_BATTLE_01_DRAMA,
    MS12_X22_BATTLE_01_AFTER,
    MS12_X22_A1_1010,
    MS12_X22_WD_0010,
    MS12_X23_WD_0005,
    MS12_X23_A1_0010,
    MS12_X23_BATTLE_01_BEFORE,
    MS12_X23_BATTLE_01_DRAMA,
    MS12_X23_BATTLE_01_AFTER,
    MS12_X23_A1_1010,
    MS12_X23_WD_0010,
    MS12_F01_C0_1005,
    MS12_F01_A0_0010,
    MS12_F01_C0_0010,
    MS12_F01_C0_0020,
    MS12_F01_C0_1010,
    MS13_H01_WD_0010,
    MS13_H01_C0_0010,
    MS13_H01_A1_0010,
    MS13_H01_A2_0010,
    MS13_H01_A0_0010,
    MS13_H01_VOTE_START,
    MS13_H01_VOTE_110,
    MS13_H01_VOTE_120,
    MS13_H01_VOTE_130,
    MS13_H01_PERSUADE_DRAMA,
    MS13_H01_VOTE_DRAMA,
    MS13_H01_PERSUADE_RESEARCH_DRAMA,
    MS13_X24_WD_0010,
    MS13_X24_A1_0010,
    MS13_X24_A1_0020,
    MS13_X24_A0_0010,
    MS13_X24_A1_1010,
    MS13_X24_WD_0015,
    MS13_X24_RESEARCH_01_BEFORE,
    MS13_X24_RESEARCH_01_AFTER,
    MS13_X24_BATTLE_01_BEFORE,
    MS13_X24_BATTLE_01_DRAMA,
    MS13_X24_BATTLE_01_AFTER,
    MS13_X24_A0_1010,
    MS13_X24_A0_0020,
    MS13_X24_RESEARCH_01_DRAMA,
    MS13_X25_WD_0010,
    MS13_X25_A1_0010,
    MS13_X25_A1_1010,
    MS13_X25_A0_0010,
    MS13_X25_A0_0020,
    MS13_X25_WD_0020,
    MS13_X25_A0_0030,
    MS13_X25_RESEARCH_01_BEFORE,
    MS13_X25_RESEARCH_01_AFTER,
    MS13_X25_BATTLE_01_BEFORE,
    MS13_X25_BATTLE_01_DRAMA,
    MS13_X25_BATTLE_01_AFTER,
    MS13_X25_A0_0040,
    MS13_X25_RESEARCH_01_DRAMA,
    MS13_X26_WD_0010,
    MS13_X26_A0_0010,
    MS13_X26_A0_1010,
    MS13_X26_A0_0020,
    MS13_X26_A0_0023,
    MS13_X26_A0_0025,
    MS13_X26_A0_0030,
    MS13_X26_A0_0040,
    MS13_X26_WD_0015,
    MS13_X26_RESEARCH_01_BEFORE,
    MS13_X26_RESEARCH_01_AFTER,
    MS13_X26_BATTLE_01_BEFORE,
    MS13_X26_BATTLE_01_DRAMA,
    MS13_X26_BATTLE_01_AFTER,
    MS13_X26_A0_1020,
    MS13_X26_RESEARCH_01_DRAMA,
    MS14_X27_WD_0010,
    MS14_X27_A0_0020,
    MS14_X27_A0_1010,
    MS14_X27_BATTLE_01_BEFORE,
    MS14_X27_BATTLE_01_DRAMA,
    MS14_X27_BATTLE_01_AFTER,
    MS14_X27_A0_1020,
    MS14_X28_WD_0010,
    MS14_X28_BATTLE_01_BEFORE,
    MS14_X28_BATTLE_01_DRAMA,
    MS14_X28_BATTLE_01_AFTER,
    MS14_X28_A0_0025,
    MS14_X28_WD_0020,
    MS14_X28_A0_0030,
    MS14_X29_WD_0010,
    MS14_X29_A0_0010,
    MS14_X29_BATTLE_01_BEFORE,
    MS14_X29_BATTLE_01_DRAMA,
    MS14_X29_BATTLE_01_AFTER,
    MS14_X29_WD_0020,
    MS14_X29_A0_2010,
    MS14_F01_WD_0010,
    MS14_F01_A0_0010,
    MS14_F01_A0_0020,
    MS14_F01_B0_0010,
    MS15_H01_WD_0010,
    MS15_H01_A0_0010,
    MS15_H01_A0_0020,
    MS15_H01_A0_1010,
    MS15_H01_A0_0030,
    MS15_H01_A0_0040,
    MS15_H01_VOTE_START,
    MS15_H01_C0_1010,
    MS15_H01_VOTE_110,
    MS15_H01_VOTE_120,
    MS15_H01_VOTE_130,
    MS15_H01_PERSUADE_DRAMA,
    MS15_H01_VOTE_DRAMA,
    MS15_H01_PERSUADE_RESEARCH_DRAMA,
    MS15_X30_WD_0010,
    MS15_X30_A1_0010,
    MS15_X30_A1_2010,
    MS15_X30_B0_0010,
    MS15_X30_C0_0010,
    MS15_X30_A1_1010,
    MS15_X30_RESEARCH_01_BEFORE,
    MS15_X30_RESEARCH_01_DRAMA,
    MS15_X30_RESEARCH_01_AFTER,
    MS15_X30_BATTLE_01_BEFORE,
    MS15_X30_BATTLE_01_DRAMA,
    MS15_X30_BATTLE_01_AFTER,
    MS15_X30_A1_1020,
    MS15_X30_A1_2020,
    MS15_X31_WD_0010,
    MS15_X31_A0_0010,
    MS15_X31_A0_1010,
    MS15_X31_B0_0010,
    MS15_X31_RESEARCH_01_BEFORE,
    MS15_X31_RESEARCH_01_DRAMA,
    MS15_X31_RESEARCH_01_AFTER,
    MS15_X31_BATTLE_01_BEFORE,
    MS15_X31_BATTLE_01_DRAMA,
    MS15_X31_BATTLE_01_AFTER,
    MS15_X31_A0_0020,
    MS15_X31_A0_1020,
    MS15_X32_A1_0010,
    MS15_X32_WD_0010,
    MS15_X32_RESEARCH_01_BEFORE,
    MS15_X32_RESEARCH_01_DRAMA,
    MS15_X32_RESEARCH_01_AFTER,
    MS15_X32_BATTLE_01_BEFORE,
    MS15_X32_BATTLE_01_DRAMA,
    MS15_X32_BATTLE_01_AFTER,
    MS15_X32_RESEARCH_02_BEFORE,
    MS15_X32_RESEARCH_02_AFTER,
    MS15_X32_A1_0020,
    MS15_X33_A1_0010,
    MS15_X33_WD_0010,
    MS15_X33_RESEARCH_01_BEFORE,
    MS15_X33_RESEARCH_01_DRAMA,
    MS15_X33_RESEARCH_01_AFTER,
    MS15_X33_BATTLE_01_BEFORE,
    MS15_X33_BATTLE_01_DRAMA,
    MS15_X33_BATTLE_01_AFTER,
    MS15_X33_RESEARCH_02_BEFORE,
    MS15_X33_RESEARCH_02_AFTER,
    MS15_X33_A1_0020,
    MS15_F01_WD_0010,
    MS15_F01_A0_0020,
    MS15_F01_A0_0030,
    MS15_F01_A0_0040,
    MS15_F01_A0_0010,
    MS15_F01_A1_0010,
    MS16_X34_WD_0010,
    MS16_X34_A1_0010,
    MS16_X34_C0_0010,
    MS16_X34_B0_0010,
    MS16_X34_B0_2010,
    MS16_X34_RESEARCH_01_BEFORE,
    MS16_X34_RESEARCH_01_DRAMA,
    MS16_X34_RESEARCH_01_AFTER,
    MS16_X34_BATTLE_01_BEFORE,
    MS16_X34_BATTLE_01_DRAMA,
    MS16_X34_BATTLE_01_AFTER,
    MS16_X34_A1_1020,
    MS16_X34_B0_1010,
    MS17_H01_WD_0010,
    MS17_H01_A0_0010,
    MS17_H01_C0_0010,
    MS17_H01_B0_0010,
    MS17_H01_B0_1010,
    MS17_H01_WD_0020,
    MS17_H01_A1_0015,
    MS17_H01_A1_0020,
    MS17_H01_A1_0025,
    MS17_H01_A1_0090,
    MS17_H01_VOTE_START,
    MS17_H01_A1_0030,
    MS17_H01_WD_0030,
    MS17_H01_WD_0040,
    MS17_H01_A1_0010,
    MS17_H01_A1_0080,
    MS17_H01_A1_0040,
    MS17_H01_A1_0050,
    MS17_H01_A1_0060,
    MS17_H01_A1_0070,
    MS17_H01_VOTE_110,
    MS17_H01_VOTE_120,
    MS17_H01_VOTE_130,
    MS17_H01_PERSUADE_DRAMA,
    MS17_H01_VOTE_DRAMA,
    MS17_H01_PERSUADE_RESEARCH_DRAMA,
    MS17B_X35_BATTLE_01_BEFORE,
    MS17B_X35_BATTLE_01_DRAMA,
    MS17B_X35_BATTLE_01_AFTER,
    MS17B_X35_A1_0010,
    MS17B_X35_A1_1010,
    MS17B_X35_A0_0010,
    MS17B_X35_WD_0010,
    MS17B_X35_B0_0010,
    MS17B_X35_C0_0010,
    MS17R_X36_BATTLE_01_BEFORE,
    MS17R_X36_BATTLE_01_DRAMA,
    MS17R_X36_BATTLE_01_AFTER,
    MS17R_X36_A0_1020,
    MS17R_X36_WD_0010,
    MS17R_X36_C0_0020,
    MS17R_X36_C0_0010,
    MS17R_X36_B0_0010,
    MS17F_X37_BATTLE_01_BEFORE,
    MS17F_X37_BATTLE_01_DRAMA,
    MS17F_X37_BATTLE_01_AFTER,
    MS17F_X37_A1_1010,
    MS17F_X37_A1_0010,
    MS17F_X37_A1_1020,
    MS17F_X37_A1_1030,
    MS17F_X37_WD_0010,
    MS17F_X37_C0_0010,
    MS17F_X37_B0_0010,
    MS17S_X38_WD_0010,
    MS17S_X38_A1_0010,
    MS17S_X38_RESEARCH_01_BEFORE,
    MS17S_X38_RESEARCH_01_DRAMA,
    MS17S_X38_RESEARCH_01_AFTER,
    MS17S_X38_BATTLE_01_BEFORE,
    MS17S_X38_BATTLE_01_DRAMA,
    MS17S_X38_BATTLE_01_AFTER,
    MS18B_X39_WD_0010,
    MS18B_X39_A0_0020,
    MS18B_X39_A0_0030,
    MS18B_X39_A0_0010,
    MS18B_X39_A0_0050,
    MS18B_X39_WD_0020,
    MS18B_X39_A0_0040,
    MS18B_X39_WD_0030,
    MS18B_X39_C0_0010,
    MS18B_X39_RESEARCH_01_BEFORE,
    MS18B_X39_RESEARCH_01_DRAMA,
    MS18B_X39_C0_0015,
    MS18B_X39_BATTLE_01_BEFORE,
    MS18B_X39_BATTLE_01_DRAMA,
    MS18B_X39_BATTLE_01_AFTER,
    MS18B_X39_C0_0020,
    MS18R_X40_WD_0010,
    MS18R_X40_C0_0010,
    MS18R_X40_B0_0010,
    MS18R_X40_WD_0020,
    MS18R_X40_RESEARCH_01_BEFORE,
    MS18R_X40_RESEARCH_01_DRAMA,
    MS18R_X40_BATTLE_01_BEFORE,
    MS18R_X40_BATTLE_01_DRAMA,
    MS18R_X40_BATTLE_01_AFTER,
    MS18F_X41_WD_0010,
    MS18F_X41_C0_0010,
    MS18F_X41_C0_1010,
    MS18F_X41_RESEARCH_01_BEFORE,
    MS18F_X41_RESEARCH_01_DRAMA,
    MS18F_X41_RESEARCH_01_AFTER,
    MS18F_X41_BATTLE_01_BEFORE,
    MS18F_X41_BATTLE_01_DRAMA,
    MS18F_X41_BATTLE_01_AFTER,
    MS18F_X41_C0_0020,
    MS18S_X42_WD_0010,
    MS18S_X42_B0_0010,
    MS18S_X42_RESEARCH_01_BEFORE,
    MS18S_X42_RESEARCH_01_DRAMA,
    MS18S_X42_RESEARCH_01_AFTER,
    MS18S_X42_B0_0030,
    MS18S_X42_BATTLE_01_BEFORE,
    MS18S_X42_BATTLE_01_DRAMA,
    MS18S_X42_BATTLE_01_AFTER,
    MS19B_X43_WD_0010,
    MS19B_X43_C0_0010,
    MS19B_X43_C0_1030,
    MS19B_X43_BATTLE_01_BEFORE,
    MS19B_X43_BATTLE_01_DRAMA,
    MS19B_X43_BATTLE_01_AFTER,
    MS19B_X43_C0_1010,
    MS19B_X43_WD_0015,
    MS19B_X43_C0_1020,
    MS19B_X43_C0_0020,
    MS19B_X43_BATTLE_02_BEFORE,
    MS19B_X43_BATTLE_02_DRAMA,
    MS19B_X43_BATTLE_02_AFTER,
    MS19B_X43_WD_0020,
    MS19B_X43_A1_0010,
    MS19B_X43_A0_0010,
    MS19B_X43_A1_1010,
    MS19R_X44_WD_0010,
    MS19R_X44_B0_0010,
    MS19R_X44_BATTLE_01_BEFORE,
    MS19R_X44_BATTLE_01_DRAMA,
    MS19R_X44_BATTLE_01_AFTER,
    MS19R_X44_WD_0030,
    MS19R_X44_B0_0020,
    MS19R_X44_BATTLE_02_BEFORE,
    MS19R_X44_BATTLE_02_DRAMA,
    MS19R_X44_BATTLE_02_AFTER,
    MS19R_X44_B0_0030,
    MS19R_X44_C0_0010,
    MS19R_X44_WD_0020,
    MS19R_X44_A0_0010,
    MS19R_X44_A1_0010,
    MS19F_X45_WD_0010,
    MS19F_X45_A1_0010,
    MS19F_X45_WD_0015,
    MS19F_X45_C0_0010,
    MS19F_X45_BATTLE_01_BEFORE,
    MS19F_X45_BATTLE_01_DRAMA,
    MS19F_X45_BATTLE_01_AFTER,
    MS19F_X45_C0_0020,
    MS19F_X45_WD_0020,
    MS19F_X45_C0_1010,
    MS19F_X45_BATTLE_02_BEFORE,
    MS19F_X45_BATTLE_02_DRAMA,
    MS19F_X45_BATTLE_02_AFTER,
    MS19F_X45_A3_0010,
    MS19F_X45_WD_0030,
    MS19F_X45_B0_0010,
    MS19F_X45_X0_0010,
    MS19S_X46_WD_0010,
    MS19S_X46_A1_0010,
    MS19S_X46_C0_2010,
    MS19S_X46_RESEARCH_01_BEFORE,
    MS19S_X46_RESEARCH_01_DRAMA,
    MS19S_X46_BATTLE_01_BEFORE,
    MS19S_X46_BATTLE_01_DRAMA,
    MS19S_X46_BATTLE_01_AFTER,
    MS20S_X47_WD_0010,
    MS20S_X47_RESEARCH_01_BEFORE,
    MS20S_X47_RESEARCH_01_DRAMA,
    MS20S_X47_WD_0020,
    MS20S_X47_C0_1010,
    MS20S_X47_BATTLE_01_BEFORE,
    MS20S_X47_BATTLE_01_DRAMA,
    MS20S_X47_BATTLE_01_AFTER,
    MS20S_X47_C0_2010,
    MS20S_X47_WD_0030,
    MS20S_X47_C0_3010,
    MS21S_X48_WD_0010,
    MS21S_X48_BATTLE_01_BEFORE,
    MS21S_X48_BATTLE_01_DRAMA,
    MS21S_X48_BATTLE_01_AFTER,
    MS21S_X48_C0_0030,
    MS21S_X48_WD_0020,
    MS21S_X48_BATTLE_02_BEFORE,
    MS21S_X48_BATTLE_02_DRAMA,
    MS21S_X48_BATTLE_02_AFTER,
    MS21S_X48_WD_0040,
    MS21S_X48_A0_0010,
    MS21S_X48_A1_0010,
    MS21S_X48_A0_1010,
    MS21S_X48_A1_1010,
    MS06_X07_HD010_010_010,
    MS06_X07_BT020_010_010,
    MS07_H01_HD010_010_010,
    MS07_H01_VT010_010_010,
    MS07_H01_VT010_020_010,
    MS07_X08_HD010_010_010,
    MS07_X08_HD020_010_010,
    MS07_X08_RS010_010_010,
    MS07_X08_BT010_010_010,
    MS07_X08_BT010_020_010,
    MS07_X08_BT910_010_010,
    MS07_X08_BT910_010_020,
    CS02_E01_0010,
    CS02_E01_0020,
    CS02_E01_0030,
    CS02_E02_0010,
    CS02_E02_0020,
    CS02_E02_0030,
    CS03_E01_0010,
    CS03_E01_0020,
    CS03_E01_0030,
    CS03_E02_0010,
    CS03_E02_0020,
    CS03_E02_0030,
    CS03_E02_0040,
    CS03_E02_0050,
    CS04_E01_0010,
    CS04_E01_0020,
    CS04_E02_0010,
    CS04_E02_0020,
    CS05_E01_0010,
    CS05_E01_0020,
    CS05_E01_0030,
    CS05_E02_0010,
    CS06_E01_0010,
    CS06_E01_0020,
    CS06_E01_0030,
    CS06_E02_0010,
    CS07_E01_0010,
    CS07_E01_0020,
    CS07_E01_0030,
    CS07_E02_0010,
    CS07_E02_0020,
    CS07_E02_0030,
    CS08_E01_0010,
    CS08_E01_0020,
    CS08_E01_0030,
    CS08_E02_0010,
    CS09_E01_0010,
    CS09_E01_0020,
    CS09_E01_0030,
    CS09_E02_0010,
    CS09_E02_0020,
    CS10_E01_0010,
    CS10_E01_0020,
    CS10_E02_0010,
    CS10_E02_0020,
    CS10_E03_0010,
    CS11_E01_0010,
    CS11_E01_0020,
    CS11_E01_0030,
    CS11_E02_0010,
    CS11_E03_0010,
    CS12_E01_0010,
    CS12_E01_0020,
    CS12_E01_0030,
    CS12_E02_0010,
    CS13_E01_0010,
    CS13_E01_0020,
    CS13_E01_0030,
    CS13_E02_0010,
    CS14_E01_0010,
    CS14_E01_0020,
    CS14_E01_0030,
    CS14_E02_0010,
    CS15_E01_0010,
    CS15_E02_0010,
    CS16_E01_0010,
    CS16_E01_0020,
    CS16_E01_0030,
    CS16_E02_0010,
    CS17_E01_0010,
    CS17_E02_0010,
    CS17_E03_0010,
    CS18_E01_0010,
    CS18_E01_0020,
    CS18_E02_0010,
    CS18_E03_0010,
    CS19_E01_0010,
    CS19_E01_0020,
    CS19_E02_0010,
    CS19_E03_0010,
    CS19_E01_010,
    CS19_E01_020,
    CS20_E01_0010,
    CS20_E01_0020,
    CS20_E02_0010,
    CS20_E02_0020,
    CS20_E02_0030,
    CS20_E03_0010,
    CS21_E01_0010,
    CS21_E01_0020,
    CS21_E02_0010,
    CS21_E03_0010,
    CS22_E01_0010,
    CS22_E01_0020,
    CS22_E01_0030,
    CS22_E01_0040,
    CS22_E02_0010,
    CS22_E03_0010,
    CS23_E01_0010,
    CS23_E01_0020,
    CS23_E02_0010,
    CS23_E03_0010,
    CS24_E01_0010,
    CS24_E01_0020,
    CS24_E02_0010,
    CS24_E02_0020,
    CS24_E02_0030,
    CS24_E03_0010,
    CS25_E01_0010,
    CS25_E01_0020,
    CS25_E02_0010,
    CS25_E02_0020,
    CS25_E03_0010,
    CS26_E01_0010,
    CS26_E01_0020,
    CS26_E02_0010,
    CS26_E03_0010,
    CS27_E01_0010,
    CS27_E02_0010,
    CS27_E03_0010,
    CS28_E01_0010,
    CS28_E01_0020,
    CS28_E02_0010,
    CS28_E03_0010,
    CS29_E01_0010,
    CS29_E01_0020,
    CS29_E02_0010,
    CS29_E02_0020,
    CS29_E02_0030,
    CS29_E03_0010,
    CS30_E01_0010,
    CS30_E01_0020,
    CS30_E02_0010,
    CS30_E03_0010,
    CS30_E03_0020,
    X_STANDBY_DRAMA,
    TRIAL_01_MS06_X07_WD_0010,
    GOP_DATA_COUNT,
};

