#pragma once
#include "CoreMinimal.h"
#include "EGopScenarioType.generated.h"

UENUM(BlueprintType)
enum class EGopScenarioType : uint8 {
    TEXT_MS06_X07_3E010,
    TEXT_MS07_HDR_1P010,
    TEXT_MS07_HDR_1P020,
    TEXT_MS07_HDR_1P030,
    TEXT_MS07_HDR_1P035,
    TEXT_MS07_HDR_1P040,
    TEXT_MS07_HDR_1P050,
    TEXT_MS07_X08_1P010,
    TEXT_MS07_X08_1P020,
    TEXT_MS07_X08_1P030,
    TEXT_MS07_X08_2B010,
    TEXT_MS07_X08_2B015,
    TEXT_MS07_X08_2B020,
    TEXT_MS07_X08_3E010,
    TEXT_MS07_X08_3E020,
    TEXT_MS07_X09_1P010,
    TEXT_MS07_X09_1P020,
    TEXT_MS07_X09_1P030,
    TEXT_MS07_X09_1P040,
    TEXT_MS07_X09_2B010,
    TEXT_MS07_X09_2B015,
    TEXT_MS07_X09_2B020,
    TEXT_MS07_X09_3E010,
    TEXT_MS07_X09_3E020,
    TEXT_MS07_X09_3E030,
    TEXT_DEBUG_EMOTION,
    TEXT_DEBUG_MOTION,
    TEXT_TEST_X_X_010_010,
    TEXT_TEST_TEXTFORBATTLE,
    TEXT_MS01_X01_WD_0010,
    TEXT_MS01_X01_A1_1005,
    TEXT_MS01_X01_A1_0010,
    TEXT_MS01_X01_BATTLE_01_BEFORE,
    TEXT_MS01_X01_BATTLE_01_DRAMA,
    TEXT_MS01_X01_BATTLE_01_AFTER,
    TEXT_MS01_X01_WD_0020,
    TEXT_MS01_X01_A1_1010,
    TEXT_MS01_X01_A1_1020,
    TEXT_MS01_X01_A0_0020,
    TEXT_MS01_X01_A0_0030,
    TEXT_MS01_X01_A1_1030,
    TEXT_MS01_X01_OLD_WD_0010,
    TEXT_MS01_X01_OLD_A1_0010,
    TEXT_MS01_X01_OLD_BATTLE_01_BEFORE,
    TEXT_MS01_X01_OLD_BATTLE_01_AFTER,
    TEXT_MS01_X01_OLD_A1_1010,
    TEXT_MS01_X01_OLD_A1_1020,
    TEXT_MS01_X01_OLD_A0_0020,
    TEXT_MS01_X01_OLD_A0_0030,
    TEXT_MS01_X01_OLD_A1_1030,
    TEXT_MS02_X02_WD_0010,
    TEXT_MS02_X02_A1_0010,
    TEXT_MS02_X02_RESEARCH_01_AFTER,
    TEXT_MS02_X02_A1_0030,
    TEXT_MS02_X02_A1_1010,
    TEXT_MS02_X02_A0_0010,
    TEXT_MS02_X02_A1_0020,
    TEXT_MS02_X02_A0_0015,
    TEXT_MS02_X02_HD050_010,
    TEXT_MS02_X02_A0_0020,
    TEXT_MS02_X02_RESEARCH_02_BEFORE,
    TEXT_MS02_X02_RESEARCH_02_DRAMA,
    TEXT_MS02_X02_BATTLE_01_BEFORE,
    TEXT_MS02_X02_BATTLE_01_DRAMA,
    TEXT_MS02_X02_BATTLE_01_AFTER_02,
    TEXT_MS02_X02_BATTLE_01_AFTER_05,
    TEXT_MS02_X02_BATTLE_01_AFTER_01,
    TEXT_MS02_X02_BATTLE_01_AFTER_06,
    TEXT_MS02_X02_BATTLE_01_AFTER_04,
    TEXT_MS02_X02_BATTLE_02_DRAMA,
    TEXT_MS02_X02_BATTLE_02_AFTER_01,
    TEXT_MS02_X02_BATTLE_02_AFTER_02,
    TEXT_MS02_X02_RESEARCH_01_DRAMA,
    TEXT_MS03_H01_WD_0010,
    TEXT_MS03_H01_WD_0020,
    TEXT_MS03_H01_WD_0030,
    TEXT_MS03_H01_A0_0010,
    TEXT_MS03_H01_VOTE_START,
    TEXT_MS03_H01_PERSUADE_DRAMA,
    TEXT_MS03_H01_PERSUADE_RESEARCH_DRAMA,
    TEXT_MS03_H01_VOTE_DRAMA,
    TEXT_MS03_H01_VOTE_110,
    TEXT_MS03_H01_VOTE_120,
    TEXT_MS03_X03_WD_0010,
    TEXT_MS03_X03_B0_0010,
    TEXT_MS03_X03_B0_1010,
    TEXT_MS03_X03_A0_0010,
    TEXT_MS03_X03_B0_2020,
    TEXT_MS03_X03_B0_2010,
    TEXT_MS03_X03_RESEARCH_01_BEFORE,
    TEXT_MS03_X03_BATTLE_01_BEFORE,
    TEXT_MS03_X03_BATTLE_01_DRAMA,
    TEXT_MS03_X03_BATTLE_01_AFTER,
    TEXT_MS03_X03_B0_1020,
    TEXT_MS03_X03_B0_2030,
    TEXT_MS03_X03_PART_RESEARCH_01_DRAMA_01,
    TEXT_MS03_X03_PART_RESEARCH_01_DRAMA_02,
    TEXT_MS03_X03_RESEARCH_01_DRAMA_01,
    TEXT_MS03_X03_RESEARCH_01_DRAMA_02,
    TEXT_MS03_X04_WD_0010,
    TEXT_MS03_X04_C0_3010,
    TEXT_MS03_X04_C0_2010,
    TEXT_MS03_X04_C0_0010,
    TEXT_MS03_X04_RESEARCH_01_BEFORE,
    TEXT_MS03_X04_RESEARCH_01_AFTER,
    TEXT_MS03_X04_BATTLE_01_BEFORE,
    TEXT_MS03_X04_BATTLE_01_DRAMA,
    TEXT_MS03_X04_BATTLE_01_AFTER,
    TEXT_MS03_X04_C0_2020,
    TEXT_MS03_X04_C0_2030,
    TEXT_MS03_X04_RESEARCH_01_DRAMA_01,
    TEXT_MS03_X04_RESEARCH_01_DRAMA_02,
    TEXT_MS04_X05_WD_0010,
    TEXT_MS04_X05_A1_1010,
    TEXT_MS04_X05_A1_0010,
    TEXT_MS04_X05_A0_0010,
    TEXT_MS04_X05_RESEARCH_01_BEFORE,
    TEXT_MS04_X05_A1_1020,
    TEXT_MS04_X05_B0_0010,
    TEXT_MS04_X05_A1_2010,
    TEXT_MS04_X05_WD_0020,
    TEXT_MS04_X05_RESEARCH_02_BEFORE,
    TEXT_MS04_X05_BATTLE_01_BEFORE,
    TEXT_MS04_X05_BATTLE_01_DRAMA,
    TEXT_MS04_X05_BATTLE_01_AFTER,
    TEXT_MS04_X05_RESEARCH_01_DRAMA,
    TEXT_MS04_X05_RESEARCH_02_DRAMA,
    TEXT_MS05_X06_WD_0010,
    TEXT_MS05_X06_A0_1010,
    TEXT_MS05_X06_A1_0010,
    TEXT_MS05_X06_A2_0010,
    TEXT_MS05_X06_RESEARCH_01_BEFORE,
    TEXT_MS05_X06_BATTLE_01_BEFORE,
    TEXT_MS05_X06_BATTLE_01_DRAMA,
    TEXT_MS05_X06_BATTLE_01_AFTER,
    TEXT_MS05_X06_RESEARCH_01_DRAMA,
    TEXT_MS06_X07_WD_0010,
    TEXT_MS06_X07_A0_0010,
    TEXT_MS06_X07_RESEARCH_01_BEFORE,
    TEXT_MS06_X07_RESEARCH_01_DRAMA,
    TEXT_MS06_X07_A3_0010,
    TEXT_MS06_X07_BATTLE_01_BEFORE,
    TEXT_MS06_X07_BATTLE_01_DRAMA,
    TEXT_MS06_X07_BATTLE_01_AFTER,
    TEXT_MS07_H01_WD_0010,
    TEXT_MS07_H01_A0_0010,
    TEXT_MS07_H01_A0_1020,
    TEXT_MS07_H01_WD_0020,
    TEXT_MS07_H01_A1_1020,
    TEXT_MS07_H01_A0_1010,
    TEXT_MS07_H01_A2_0010,
    TEXT_MS07_H01_A3_0010,
    TEXT_MS07_H01_C0_0010,
    TEXT_MS07_H01_A1_1030,
    TEXT_MS07_H01_A1_1040,
    TEXT_MS07_H01_WD_0030,
    TEXT_MS07_H01_A1_1050,
    TEXT_MS07_H01_A1_0010,
    TEXT_MS07_H01_VOTE_START,
    TEXT_MS07_H01_VOTE_110,
    TEXT_MS07_H01_VOTE_120,
    TEXT_MS07_H01_PERSUADE_DRAMA,
    TEXT_MS07_H01_VOTE_DRAMA,
    TEXT_MS07_H01_PERSUADE_RESEARCH_DRAMA,
    TEXT_MS07_X08_WD_0010,
    TEXT_MS07_X08_A0_0010,
    TEXT_MS07_X08_A1_0010,
    TEXT_MS07_X08_A0_0020,
    TEXT_MS07_X08_A2_0010,
    TEXT_MS07_X08_A3_0010,
    TEXT_MS07_X08_RESEARCH_01_BEFORE,
    TEXT_MS07_X08_RESEARCH_01_DRAMA,
    TEXT_MS07_X08_RESEARCH_01_AFTER,
    TEXT_MS07_X08_BATTLE_01_BEFORE,
    TEXT_MS07_X08_BATTLE_01_DRAMA,
    TEXT_MS07_X08_BATTLE_01_AFTER,
    TEXT_MS07_X08_BATTLE_02_AFTER,
    TEXT_MS07_X08_WD_0020,
    TEXT_MS07_X08_A1_0020,
    TEXT_MS07_X08_A0_0030,
    TEXT_MS07_X08_A2_0020,
    TEXT_MS07_X08_A3_0020,
    TEXT_MS07_X08_C0_0010,
    TEXT_MS07_X08_A1_0030,
    TEXT_MS07_X09_WD_0010,
    TEXT_MS07_X09_A0_0010,
    TEXT_MS07_X09_A0_0020,
    TEXT_MS07_X09_A1_0010,
    TEXT_MS07_X09_A1_1010,
    TEXT_MS07_X09_A3_0010,
    TEXT_MS07_X09_A3_0020,
    TEXT_MS07_X09_RESEARCH_01_BEFORE,
    TEXT_MS07_X09_WD_0020,
    TEXT_MS07_X09_C0_0010,
    TEXT_MS07_X09_RESEARCH_01_AFTER,
    TEXT_MS07_X09_BATTLE_01_BEFORE,
    TEXT_MS07_X09_BATTLE_01_DRAMA,
    TEXT_MS07_X09_BATTLE_01_AFTER,
    TEXT_MS07_X09_BT910_010,
    TEXT_MS07_X09_A0_0030,
    TEXT_MS07_X09_A1_1020,
    TEXT_MS07_X09_A3_0030,
    TEXT_MS07_X09_B0_0010,
    TEXT_MS07_X09_A1_0020,
    TEXT_MS07_X09_RESEARCH_01_DRAMA,
    TEXT_MS08A_H01_WD_0010,
    TEXT_MS08A_H01_A1_0010,
    TEXT_MS08A_H01_C0_0010,
    TEXT_MS08A_H01_VOTE_START,
    TEXT_MS08A_H01_VOTE_110,
    TEXT_MS08A_H01_VOTE_120,
    TEXT_MS08A_H01_PERSUADE_DRAMA,
    TEXT_MS08A_H01_VOTE_DRAMA,
    TEXT_MS08A_H01_PERSUADE_RESEARCH_DRAMA_01,
    TEXT_MS08A_H01_PERSUADE_RESEARCH_DRAMA_02,
    TEXT_MS08A_X10_WD_0010,
    TEXT_MS08A_X10_A2_0010,
    TEXT_MS08A_X10_A0_0010,
    TEXT_MS08A_X10_A1_0010,
    TEXT_MS08A_X10_A1_1010,
    TEXT_MS08A_X10_A1_0020,
    TEXT_MS08A_X10_RESEARCH_01_BEFORE,
    TEXT_MS08A_X10_RESEARCH_01_AFTER,
    TEXT_MS08A_X10_A3_0010,
    TEXT_MS08A_X10_BATTLE_01_BEFORE,
    TEXT_MS08A_X10_BATTLE_01_DRAMA,
    TEXT_MS08A_X10_BATTLE_01_AFTER,
    TEXT_MS08A_X10_RESEARCH_01_DRAMA,
    TEXT_MS08A_X11_WD_0010,
    TEXT_MS08A_X11_A2_0010,
    TEXT_MS08A_X11_A1_0010,
    TEXT_MS08A_X11_A1_0020,
    TEXT_MS08A_X11_BATTLE_01_BEFORE,
    TEXT_MS08A_X11_BATTLE_01_DRAMA,
    TEXT_MS08A_X11_BATTLE_01_AFTER,
    TEXT_MS08A_X11_RESEARCH_01_DRAMA,
    TEXT_MS08A_F01_WD_0010,
    TEXT_MS08A_F01_A3_0010,
    TEXT_MS08A_F01_A2_0010,
    TEXT_MS08A_F01_WD_0020,
    TEXT_MS08A_F01_C1_0010,
    TEXT_MS08A_F01_A1_1020,
    TEXT_MS08A_F01_A1_1010,
    TEXT_MS08A_F01_A0_0010,
    TEXT_MS08A_F01_A1_2010,
    TEXT_MS08A_F01_A0_0020,
    TEXT_MS08B_H01_WD_0010,
    TEXT_MS08B_H01_A1_0010,
    TEXT_MS08B_H01_A0_0010,
    TEXT_MS08B_H01_A1_0020,
    TEXT_MS08B_H01_C1_0010,
    TEXT_MS08B_H01_WD_0020,
    TEXT_MS08B_H01_A0_0020,
    TEXT_MS08B_H01_VOTE_START,
    TEXT_MS08B_H01_VOTE_110,
    TEXT_MS08B_H01_VOTE_120,
    TEXT_MS08B_H01_PERSUADE_RESEARCH_DRAMA,
    TEXT_MS08B_H01_PERSUADE_DRAMA,
    TEXT_MS08B_H01_VOTE_DRAMA,
    TEXT_MS08B_X12_WD_0010,
    TEXT_MS08B_X12_C1_0010,
    TEXT_MS08B_X12_A1_0010,
    TEXT_MS08B_X12_A0_0010,
    TEXT_MS08B_X12_RESEARCH_01_BEFORE,
    TEXT_MS08B_X12_BATTLE_01_BEFORE,
    TEXT_MS08B_X12_BATTLE_01_DRAMA,
    TEXT_MS08B_X12_BATTLE_01_AFTER,
    TEXT_MS08B_X12_A1_1010,
    TEXT_MS08B_X12_RESEARCH_01_DRAMA,
    TEXT_MS08B_X13_WD_0010,
    TEXT_MS08B_X13_C1_0010,
    TEXT_MS08B_X13_A1_0010,
    TEXT_MS08B_X13_RESEARCH_01_BEFORE,
    TEXT_MS08B_X13_BATTLE_01_BEFORE,
    TEXT_MS08B_X13_BATTLE_01_DRAMA,
    TEXT_MS08B_X13_BATTLE_01_AFTER,
    TEXT_MS08B_X13_A1_1010,
    TEXT_MS08B_X13_RESEARCH_01_DRAMA,
    TEXT_MS08B_F01_WD_0010,
    TEXT_MS08B_F01_A1_0010,
    TEXT_MS08B_F01_A1_0020,
    TEXT_MS08B_F01_C1_0010,
    TEXT_MS08B_F01_A0_0010,
    TEXT_MS08B_F01_A0_0015,
    TEXT_MS08B_F01_A0_0020,
    TEXT_MS08B_F01_A1_0030,
    TEXT_MS08B_F01_C1_0020,
    TEXT_MS08B_F01_A0_0030,
    TEXT_MS09_H01_WD_0010,
    TEXT_MS09_H01_A0_0010,
    TEXT_MS09_H01_A1_0020,
    TEXT_MS09_H01_A1_0010,
    TEXT_MS09_H01_A1_1010,
    TEXT_MS09_H01_A1_0030,
    TEXT_MS09_H01_A1_2010,
    TEXT_MS09_H01_B0_0010,
    TEXT_MS09_H01_C0_0010,
    TEXT_MS09_H01_VOTE_START,
    TEXT_MS09_H01_VOTE_110,
    TEXT_MS09_H01_VOTE_120,
    TEXT_MS09_H01_PERSUADE_DRAMA,
    TEXT_MS09_H01_VOTE_DRAMA,
    TEXT_MS09_H01_PERSUADE_RESEARCH_DRAMA_01,
    TEXT_MS09_H01_PERSUADE_RESEARCH_DRAMA_02,
    TEXT_MS09_X14_WD_0010,
    TEXT_MS09_X14_A1_0010,
    TEXT_MS09_X14_A1_1010,
    TEXT_MS09_X14_WD_0015,
    TEXT_MS09_X14_A0_0010,
    TEXT_MS09_X14_RESEARCH_01_BEFORE,
    TEXT_MS09_X14_RESEARCH_01_AFTER,
    TEXT_MS09_X14_BATTLE_01_BEFORE,
    TEXT_MS09_X14_BATTLE_01_DRAMA,
    TEXT_MS09_X14_BATTLE_01_AFTER,
    TEXT_MS09_X14_WD_0020,
    TEXT_MS09_X14_B0_0010,
    TEXT_MS09_X14_RESEARCH_01_DRAMA,
    TEXT_MS09_X15_WD_0010,
    TEXT_MS09_X15_C0_0010,
    TEXT_MS09_X15_C0_0020,
    TEXT_MS09_X15_C0_3010,
    TEXT_MS09_X15_WD_0020,
    TEXT_MS09_X15_C0_0030,
    TEXT_MS09_X15_RESEARCH_01_BEFORE,
    TEXT_MS09_X15_BATTLE_01_BEFORE,
    TEXT_MS09_X15_BATTLE_01_DRAMA,
    TEXT_MS09_X15_BATTLE_01_AFTER,
    TEXT_MS09_X15_WD_0030,
    TEXT_MS09_X15_C0_2010,
    TEXT_MS09_X15_RESEARCH_01_DRAMA,
    TEXT_MS10A_H01_WD_0010,
    TEXT_MS10A_H01_B0_0010,
    TEXT_MS10A_H01_VOTE_START,
    TEXT_MS10A_H01_VOTE_110,
    TEXT_MS10A_H01_VOTE_120,
    TEXT_MS10A_H01_PERSUADE_DRAMA,
    TEXT_MS10A_H01_VOTE_DRAMA,
    TEXT_MS10A_H01_PERSUADE_RESEARCH_DRAMA,
    TEXT_MS10A_X16_WD_0005,
    TEXT_MS10A_X16_B0_0010,
    TEXT_MS10A_X16_B0_0020,
    TEXT_MS10A_X16_RESEARCH_01_BEFORE,
    TEXT_MS10A_X16_RESEARCH_01_DRAMA,
    TEXT_MS10A_X16_B0_1010,
    TEXT_MS10A_X16_BATTLE_01_BEFORE,
    TEXT_MS10A_X16_BATTLE_01_DRAMA,
    TEXT_MS10A_X16_BATTLE_01_AFTER,
    TEXT_MS10A_X16_B0_0030,
    TEXT_MS10A_X16_WD_0010,
    TEXT_MS10A_X17_WD_0005,
    TEXT_MS10A_X17_B0_0010,
    TEXT_MS10A_X17_B0_0020,
    TEXT_MS10A_X17_B0_3010,
    TEXT_MS10A_X17_C1_0010,
    TEXT_MS10A_X17_B0_2010,
    TEXT_MS10A_X17_BATTLE_01_BEFORE,
    TEXT_MS10A_X17_BATTLE_01_DRAMA,
    TEXT_MS10A_X17_BATTLE_01_AFTER,
    TEXT_MS10A_X17_B0_1010,
    TEXT_MS10A_X17_WD_0010,
    TEXT_MS10A_F01_C1_0010,
    TEXT_MS10A_F01_C0_0010,
    TEXT_MS10A_F01_C0_0020,
    TEXT_MS10A_F01_C0_2010,
    TEXT_MS10A_F01_C0_1010,
    TEXT_MS10A_F01_C0_0030,
    TEXT_MS10B_H01_WD_0010,
    TEXT_MS10B_H01_RESEARCH_01_BEFORE,
    TEXT_MS10B_H01_RESEARCH_01_DRAMA,
    TEXT_MS10B_H01_RESEARCH_01_AFTER,
    TEXT_MS10B_H01_C0_1010,
    TEXT_MS10B_X18_WD_0010,
    TEXT_MS10B_X18_C0_0010,
    TEXT_MS10B_X18_C0_2010,
    TEXT_MS10B_X18_C1_0010,
    TEXT_MS10B_X18_C0_0020,
    TEXT_MS10B_X18_BATTLE_01_BEFORE,
    TEXT_MS10B_X18_BATTLE_01_DRAMA,
    TEXT_MS10B_X18_BATTLE_01_AFTER,
    TEXT_MS10B_X18_C0_1010,
    TEXT_MS10B_X19_WD_0010,
    TEXT_MS10B_X19_C0_0010,
    TEXT_MS10B_X19_C0_0020,
    TEXT_MS10B_X19_C0_0030,
    TEXT_MS10B_X19_C0_1010,
    TEXT_MS10B_X19_BATTLE_01_BEFORE,
    TEXT_MS10B_X19_BATTLE_01_DRAMA,
    TEXT_MS10B_X19_BATTLE_01_AFTER,
    TEXT_MS10B_X19_C0_2010,
    TEXT_MS10B_F01_WD_0010,
    TEXT_MS10B_F01_C0_0010,
    TEXT_MS10B_F01_C0_1010,
    TEXT_MS11_H01_WD_0010,
    TEXT_MS11_H01_C0_0010,
    TEXT_MS11_H01_RESEARCH_01_BEFORE,
    TEXT_MS11_H01_RESEARCH_01_DRAMA,
    TEXT_MS11_H01_A1_1010,
    TEXT_MS11_H01_A0_0010,
    TEXT_MS11_H01_C0_1010,
    TEXT_MS11_H01_C0_0020,
    TEXT_MS11_H01_WD_0020,
    TEXT_MS11_H01_VOTE_START,
    TEXT_MS11_H01_VOTE_110,
    TEXT_MS11_H01_VOTE_120,
    TEXT_MS11_H01_PERSUADE_DRAMA,
    TEXT_MS11_H01_VOTE_DRAMA,
    TEXT_MS11_X20_WD_0010,
    TEXT_MS11_X20_C0_0010,
    TEXT_MS11_X20_A1_0010,
    TEXT_MS11_X20_BATTLE_01_BEFORE,
    TEXT_MS11_X20_BATTLE_01_DRAMA,
    TEXT_MS11_X20_BATTLE_01_AFTER,
    TEXT_MS11_X20_A1_1010,
    TEXT_MS11_X20_A1_1020,
    TEXT_MS11_X21_WD_0010,
    TEXT_MS11_X21_A1_0010,
    TEXT_MS11_X21_A1_2010,
    TEXT_MS11_X21_C0_0010,
    TEXT_MS11_X21_BATTLE_01_BEFORE,
    TEXT_MS11_X21_BATTLE_01_DRAMA,
    TEXT_MS11_X21_BATTLE_01_AFTER,
    TEXT_MS11_X21_A1_2020,
    TEXT_MS11_X21_WD_0020,
    TEXT_MS11_X21_RESEARCH_01_BEFORE,
    TEXT_MS11_X21_RESEARCH_01_DRAMA,
    TEXT_MS11_X21_A1_2030,
    TEXT_MS11_F01_A1_0010,
    TEXT_MS11_F01_A1_0020,
    TEXT_MS11_F01_WD_0010,
    TEXT_MS11_F01_A1_0030,
    TEXT_MS11_F01_C0_0010,
    TEXT_MS11_F01_C0_0020,
    TEXT_MS11_F01_C0_1010,
    TEXT_MS11_F01_C0_1020,
    TEXT_MS11_F01_C0_1030,
    TEXT_MS11_F02_A1_0010,
    TEXT_MS11_F02_WD_0010,
    TEXT_MS11_F02_A1_0020,
    TEXT_MS11_F02_WD_0020,
    TEXT_MS11_F02_A0_0010,
    TEXT_MS12_H01_WD_0010,
    TEXT_MS12_H01_A1_0010,
    TEXT_MS12_H01_A1_0015,
    TEXT_MS12_H01_A1_0020,
    TEXT_MS12_H01_A1_0030,
    TEXT_MS12_H01_A1_0040,
    TEXT_MS12_H01_A0_0010,
    TEXT_MS12_H01_VOTE_START,
    TEXT_MS12_H01_VOTE_110,
    TEXT_MS12_H01_VOTE_120,
    TEXT_MS12_H01_VOTE_130,
    TEXT_MS12_X22_WD_0005,
    TEXT_MS12_X22_BATTLE_01_BEFORE,
    TEXT_MS12_X22_BATTLE_01_DRAMA,
    TEXT_MS12_X22_BATTLE_01_AFTER,
    TEXT_MS12_X22_A1_1010,
    TEXT_MS12_X22_WD_0010,
    TEXT_MS12_X23_WD_0005,
    TEXT_MS12_X23_A1_0010,
    TEXT_MS12_X23_BATTLE_01_BEFORE,
    TEXT_MS12_X23_BATTLE_01_DRAMA,
    TEXT_MS12_X23_BATTLE_01_AFTER,
    TEXT_MS12_X23_A1_1010,
    TEXT_MS12_X23_WD_0010,
    TEXT_MS12_F01_C0_1005,
    TEXT_MS12_F01_A0_0010,
    TEXT_MS12_F01_C0_0010,
    TEXT_MS12_F01_C0_0020,
    TEXT_MS12_F01_C0_1010,
    TEXT_MS13_H01_WD_0010,
    TEXT_MS13_H01_C0_0010,
    TEXT_MS13_H01_A1_0010,
    TEXT_MS13_H01_A2_0010,
    TEXT_MS13_H01_A0_0010,
    TEXT_MS13_H01_VOTE_START,
    TEXT_MS13_H01_VOTE_110,
    TEXT_MS13_H01_VOTE_120,
    TEXT_MS13_H01_VOTE_130,
    TEXT_MS13_H01_PERSUADE_DRAMA,
    TEXT_MS13_H01_VOTE_DRAMA,
    TEXT_MS13_H01_PERSUADE_RESEARCH_DRAMA,
    TEXT_MS13_X24_WD_0010,
    TEXT_MS13_X24_A1_0010,
    TEXT_MS13_X24_A1_0020,
    TEXT_MS13_X24_A0_0010,
    TEXT_MS13_X24_A1_1010,
    TEXT_MS13_X24_WD_0015,
    TEXT_MS13_X24_RESEARCH_01_BEFORE,
    TEXT_MS13_X24_RESEARCH_01_AFTER,
    TEXT_MS13_X24_BATTLE_01_BEFORE,
    TEXT_MS13_X24_BATTLE_01_DRAMA,
    TEXT_MS13_X24_BATTLE_01_AFTER,
    TEXT_MS13_X24_A0_1010,
    TEXT_MS13_X24_A0_0020,
    TEXT_MS13_X24_RESEARCH_01_DRAMA,
    TEXT_MS13_X25_WD_0010,
    TEXT_MS13_X25_A1_0010,
    TEXT_MS13_X25_A1_1010,
    TEXT_MS13_X25_A0_0010,
    TEXT_MS13_X25_A0_0020,
    TEXT_MS13_X25_WD_0020,
    TEXT_MS13_X25_A0_0030,
    TEXT_MS13_X25_RESEARCH_01_BEFORE,
    TEXT_MS13_X25_RESEARCH_01_AFTER,
    TEXT_MS13_X25_BATTLE_01_BEFORE,
    TEXT_MS13_X25_BATTLE_01_DRAMA,
    TEXT_MS13_X25_BATTLE_01_AFTER,
    TEXT_MS13_X25_A0_0040,
    TEXT_MS13_X25_RESEARCH_01_DRAMA,
    TEXT_MS13_X26_WD_0010,
    TEXT_MS13_X26_A0_0010,
    TEXT_MS13_X26_A0_1010,
    TEXT_MS13_X26_A0_0020,
    TEXT_MS13_X26_A0_0023,
    TEXT_MS13_X26_A0_0025,
    TEXT_MS13_X26_A0_0030,
    TEXT_MS13_X26_A0_0040,
    TEXT_MS13_X26_WD_0015,
    TEXT_MS13_X26_RESEARCH_01_BEFORE,
    TEXT_MS13_X26_RESEARCH_01_AFTER,
    TEXT_MS13_X26_BATTLE_01_BEFORE,
    TEXT_MS13_X26_BATTLE_01_DRAMA,
    TEXT_MS13_X26_BATTLE_01_AFTER,
    TEXT_MS13_X26_A0_1020,
    TEXT_MS13_X26_RESEARCH_01_DRAMA,
    TEXT_MS14_X27_WD_0010,
    TEXT_MS14_X27_A0_0020,
    TEXT_MS14_X27_A0_1010,
    TEXT_MS14_X27_BATTLE_01_BEFORE,
    TEXT_MS14_X27_BATTLE_01_DRAMA,
    TEXT_MS14_X27_BATTLE_01_AFTER,
    TEXT_MS14_X27_A0_1020,
    TEXT_MS14_X28_WD_0010,
    TEXT_MS14_X28_BATTLE_01_BEFORE,
    TEXT_MS14_X28_BATTLE_01_DRAMA,
    TEXT_MS14_X28_BATTLE_01_AFTER,
    TEXT_MS14_X28_A0_0025,
    TEXT_MS14_X28_WD_0020,
    TEXT_MS14_X28_A0_0030,
    TEXT_MS14_X29_WD_0010,
    TEXT_MS14_X29_A0_0010,
    TEXT_MS14_X29_BATTLE_01_BEFORE,
    TEXT_MS14_X29_BATTLE_01_DRAMA,
    TEXT_MS14_X29_BATTLE_01_AFTER,
    TEXT_MS14_X29_WD_0020,
    TEXT_MS14_X29_A0_2010,
    TEXT_MS14_F01_WD_0010,
    TEXT_MS14_F01_A0_0010,
    TEXT_MS14_F01_A0_0020,
    TEXT_MS14_F01_B0_0010,
    TEXT_MS15_H01_WD_0010,
    TEXT_MS15_H01_A0_0010,
    TEXT_MS15_H01_A0_0020,
    TEXT_MS15_H01_A0_1010,
    TEXT_MS15_H01_A0_0030,
    TEXT_MS15_H01_A0_0040,
    TEXT_MS15_H01_VOTE_START,
    TEXT_MS15_H01_C0_1010,
    TEXT_MS15_H01_VOTE_110,
    TEXT_MS15_H01_VOTE_120,
    TEXT_MS15_H01_VOTE_130,
    TEXT_MS15_H01_PERSUADE_DRAMA,
    TEXT_MS15_H01_VOTE_DRAMA,
    TEXT_MS15_H01_PERSUADE_RESEARCH_DRAMA,
    TEXT_MS15_X30_WD_0010,
    TEXT_MS15_X30_A1_0010,
    TEXT_MS15_X30_A1_2010,
    TEXT_MS15_X30_B0_0010,
    TEXT_MS15_X30_C0_0010,
    TEXT_MS15_X30_A1_1010,
    TEXT_MS15_X30_RESEARCH_01_BEFORE,
    TEXT_MS15_X30_RESEARCH_01_DRAMA,
    TEXT_MS15_X30_RESEARCH_01_AFTER,
    TEXT_MS15_X30_BATTLE_01_BEFORE,
    TEXT_MS15_X30_BATTLE_01_DRAMA,
    TEXT_MS15_X30_BATTLE_01_AFTER,
    TEXT_MS15_X30_A1_1020,
    TEXT_MS15_X30_A1_2020,
    TEXT_MS15_X31_WD_0010,
    TEXT_MS15_X31_A0_0010,
    TEXT_MS15_X31_A0_1010,
    TEXT_MS15_X31_B0_0010,
    TEXT_MS15_X31_RESEARCH_01_BEFORE,
    TEXT_MS15_X31_RESEARCH_01_DRAMA,
    TEXT_MS15_X31_RESEARCH_01_AFTER,
    TEXT_MS15_X31_BATTLE_01_BEFORE,
    TEXT_MS15_X31_BATTLE_01_DRAMA,
    TEXT_MS15_X31_BATTLE_01_AFTER,
    TEXT_MS15_X31_A0_0020,
    TEXT_MS15_X31_A0_1020,
    TEXT_MS15_X32_A1_0010,
    TEXT_MS15_X32_WD_0010,
    TEXT_MS15_X32_RESEARCH_01_BEFORE,
    TEXT_MS15_X32_RESEARCH_01_DRAMA,
    TEXT_MS15_X32_RESEARCH_01_AFTER,
    TEXT_MS15_X32_BATTLE_01_BEFORE,
    TEXT_MS15_X32_BATTLE_01_DRAMA,
    TEXT_MS15_X32_BATTLE_01_AFTER,
    TEXT_MS15_X32_RESEARCH_02_BEFORE,
    TEXT_MS15_X32_RESEARCH_02_AFTER,
    TEXT_MS15_X32_A1_0020,
    TEXT_MS15_X33_A1_0010,
    TEXT_MS15_X33_WD_0010,
    TEXT_MS15_X33_RESEARCH_01_BEFORE,
    TEXT_MS15_X33_RESEARCH_01_DRAMA,
    TEXT_MS15_X33_RESEARCH_01_AFTER,
    TEXT_MS15_X33_BATTLE_01_BEFORE,
    TEXT_MS15_X33_BATTLE_01_DRAMA,
    TEXT_MS15_X33_BATTLE_01_AFTER,
    TEXT_MS15_X33_RESEARCH_02_BEFORE,
    TEXT_MS15_X33_RESEARCH_02_AFTER,
    TEXT_MS15_X33_A1_0020,
    TEXT_MS15_F01_WD_0010,
    TEXT_MS15_F01_A0_0020,
    TEXT_MS15_F01_A0_0030,
    TEXT_MS15_F01_A0_0040,
    TEXT_MS15_F01_A0_0010,
    TEXT_MS15_F01_A1_0010,
    TEXT_MS16_X34_WD_0010,
    TEXT_MS16_X34_A1_0010,
    TEXT_MS16_X34_C0_0010,
    TEXT_MS16_X34_B0_0010,
    TEXT_MS16_X34_B0_2010,
    TEXT_MS16_X34_RESEARCH_01_BEFORE,
    TEXT_MS16_X34_RESEARCH_01_DRAMA,
    TEXT_MS16_X34_RESEARCH_01_AFTER,
    TEXT_MS16_X34_BATTLE_01_BEFORE,
    TEXT_MS16_X34_BATTLE_01_DRAMA,
    TEXT_MS16_X34_BATTLE_01_AFTER,
    TEXT_MS16_X34_A1_1020,
    TEXT_MS16_X34_B0_1010,
    TEXT_MS17_H01_WD_0010,
    TEXT_MS17_H01_A0_0010,
    TEXT_MS17_H01_C0_0010,
    TEXT_MS17_H01_B0_0010,
    TEXT_MS17_H01_B0_1010,
    TEXT_MS17_H01_WD_0020,
    TEXT_MS17_H01_A1_0015,
    TEXT_MS17_H01_A1_0020,
    TEXT_MS17_H01_A1_0025,
    TEXT_MS17_H01_A1_0090,
    TEXT_MS17_H01_VOTE_START,
    TEXT_MS17_H01_A1_0030,
    TEXT_MS17_H01_WD_0030,
    TEXT_MS17_H01_WD_0040,
    TEXT_MS17_H01_A1_0010,
    TEXT_MS17_H01_A1_0080,
    TEXT_MS17_H01_A1_0040,
    TEXT_MS17_H01_A1_0050,
    TEXT_MS17_H01_A1_0060,
    TEXT_MS17_H01_A1_0070,
    TEXT_MS17_H01_VOTE_110,
    TEXT_MS17_H01_VOTE_120,
    TEXT_MS17_H01_VOTE_130,
    TEXT_MS17_H01_PERSUADE_DRAMA,
    TEXT_MS17_H01_VOTE_DRAMA,
    TEXT_MS17_H01_PERSUADE_RESEARCH_DRAMA,
    TEXT_MS17B_X35_BATTLE_01_BEFORE,
    TEXT_MS17B_X35_BATTLE_01_DRAMA,
    TEXT_MS17B_X35_BATTLE_01_AFTER,
    TEXT_MS17B_X35_A1_0010,
    TEXT_MS17B_X35_A1_1010,
    TEXT_MS17B_X35_A0_0010,
    TEXT_MS17B_X35_WD_0010,
    TEXT_MS17B_X35_B0_0010,
    TEXT_MS17B_X35_C0_0010,
    TEXT_MS17R_X36_BATTLE_01_BEFORE,
    TEXT_MS17R_X36_BATTLE_01_DRAMA,
    TEXT_MS17R_X36_BATTLE_01_AFTER,
    TEXT_MS17R_X36_A0_1020,
    TEXT_MS17R_X36_WD_0010,
    TEXT_MS17R_X36_C0_0020,
    TEXT_MS17R_X36_C0_0010,
    TEXT_MS17R_X36_B0_0010,
    TEXT_MS17F_X37_BATTLE_01_BEFORE,
    TEXT_MS17F_X37_BATTLE_01_DRAMA,
    TEXT_MS17F_X37_BATTLE_01_AFTER,
    TEXT_MS17F_X37_A1_1010,
    TEXT_MS17F_X37_A1_0010,
    TEXT_MS17F_X37_A1_1020,
    TEXT_MS17F_X37_A1_1030,
    TEXT_MS17F_X37_WD_0010,
    TEXT_MS17F_X37_C0_0010,
    TEXT_MS17F_X37_B0_0010,
    TEXT_MS17S_X38_WD_0010,
    TEXT_MS17S_X38_A1_0010,
    TEXT_MS17S_X38_RESEARCH_01_BEFORE,
    TEXT_MS17S_X38_RESEARCH_01_DRAMA,
    TEXT_MS17S_X38_RESEARCH_01_AFTER,
    TEXT_MS17S_X38_BATTLE_01_BEFORE,
    TEXT_MS17S_X38_BATTLE_01_DRAMA,
    TEXT_MS17S_X38_BATTLE_01_AFTER,
    TEXT_MS18B_X39_WD_0010,
    TEXT_MS18B_X39_A0_0020,
    TEXT_MS18B_X39_A0_0030,
    TEXT_MS18B_X39_A0_0010,
    TEXT_MS18B_X39_A0_0050,
    TEXT_MS18B_X39_WD_0020,
    TEXT_MS18B_X39_A0_0040,
    TEXT_MS18B_X39_WD_0030,
    TEXT_MS18B_X39_C0_0010,
    TEXT_MS18B_X39_RESEARCH_01_BEFORE,
    TEXT_MS18B_X39_RESEARCH_01_DRAMA,
    TEXT_MS18B_X39_C0_0015,
    TEXT_MS18B_X39_BATTLE_01_BEFORE,
    TEXT_MS18B_X39_BATTLE_01_DRAMA,
    TEXT_MS18B_X39_BATTLE_01_AFTER,
    TEXT_MS18B_X39_C0_0020,
    TEXT_MS18R_X40_WD_0010,
    TEXT_MS18R_X40_C0_0010,
    TEXT_MS18R_X40_B0_0010,
    TEXT_MS18R_X40_WD_0020,
    TEXT_MS18R_X40_RESEARCH_01_BEFORE,
    TEXT_MS18R_X40_RESEARCH_01_DRAMA,
    TEXT_MS18R_X40_BATTLE_01_BEFORE,
    TEXT_MS18R_X40_BATTLE_01_DRAMA,
    TEXT_MS18R_X40_BATTLE_01_AFTER,
    TEXT_MS18F_X41_WD_0010,
    TEXT_MS18F_X41_C0_0010,
    TEXT_MS18F_X41_C0_1010,
    TEXT_MS18F_X41_RESEARCH_01_BEFORE,
    TEXT_MS18F_X41_RESEARCH_01_DRAMA,
    TEXT_MS18F_X41_RESEARCH_01_AFTER,
    TEXT_MS18F_X41_BATTLE_01_BEFORE,
    TEXT_MS18F_X41_BATTLE_01_DRAMA,
    TEXT_MS18F_X41_BATTLE_01_AFTER,
    TEXT_MS18F_X41_C0_0020,
    TEXT_MS18S_X42_WD_0010,
    TEXT_MS18S_X42_B0_0010,
    TEXT_MS18S_X42_RESEARCH_01_BEFORE,
    TEXT_MS18S_X42_RESEARCH_01_DRAMA,
    TEXT_MS18S_X42_RESEARCH_01_AFTER,
    TEXT_MS18S_X42_B0_0030,
    TEXT_MS18S_X42_BATTLE_01_BEFORE,
    TEXT_MS18S_X42_BATTLE_01_DRAMA,
    TEXT_MS18S_X42_BATTLE_01_AFTER,
    TEXT_MS19B_X43_WD_0010,
    TEXT_MS19B_X43_C0_0010,
    TEXT_MS19B_X43_C0_1030,
    TEXT_MS19B_X43_BATTLE_01_BEFORE,
    TEXT_MS19B_X43_BATTLE_01_DRAMA,
    TEXT_MS19B_X43_BATTLE_01_AFTER,
    TEXT_MS19B_X43_C0_1010,
    TEXT_MS19B_X43_WD_0015,
    TEXT_MS19B_X43_C0_1020,
    TEXT_MS19B_X43_C0_0020,
    TEXT_MS19B_X43_BATTLE_02_BEFORE,
    TEXT_MS19B_X43_BATTLE_02_DRAMA,
    TEXT_MS19B_X43_BATTLE_02_AFTER,
    TEXT_MS19B_X43_WD_0020,
    TEXT_MS19B_X43_A1_0010,
    TEXT_MS19B_X43_A0_0010,
    TEXT_MS19B_X43_A1_1010,
    TEXT_MS19R_X44_WD_0010,
    TEXT_MS19R_X44_B0_0010,
    TEXT_MS19R_X44_BATTLE_01_BEFORE,
    TEXT_MS19R_X44_BATTLE_01_DRAMA,
    TEXT_MS19R_X44_BATTLE_01_AFTER,
    TEXT_MS19R_X44_WD_0030,
    TEXT_MS19R_X44_B0_0020,
    TEXT_MS19R_X44_BATTLE_02_BEFORE,
    TEXT_MS19R_X44_BATTLE_02_DRAMA,
    TEXT_MS19R_X44_BATTLE_02_AFTER,
    TEXT_MS19R_X44_B0_0030,
    TEXT_MS19R_X44_C0_0010,
    TEXT_MS19R_X44_WD_0020,
    TEXT_MS19R_X44_A0_0010,
    TEXT_MS19R_X44_A1_0010,
    TEXT_MS19F_X45_WD_0010,
    TEXT_MS19F_X45_A1_0010,
    TEXT_MS19F_X45_WD_0015,
    TEXT_MS19F_X45_C0_0010,
    TEXT_MS19F_X45_BATTLE_01_BEFORE,
    TEXT_MS19F_X45_BATTLE_01_DRAMA,
    TEXT_MS19F_X45_BATTLE_01_AFTER,
    TEXT_MS19F_X45_C0_0020,
    TEXT_MS19F_X45_WD_0020,
    TEXT_MS19F_X45_C0_1010,
    TEXT_MS19F_X45_BATTLE_02_BEFORE,
    TEXT_MS19F_X45_BATTLE_02_DRAMA,
    TEXT_MS19F_X45_BATTLE_02_AFTER,
    TEXT_MS19F_X45_A3_0010,
    TEXT_MS19F_X45_WD_0030,
    TEXT_MS19F_X45_B0_0010,
    TEXT_MS19F_X45_X0_0010,
    TEXT_MS19S_X46_WD_0010,
    TEXT_MS19S_X46_A1_0010,
    TEXT_MS19S_X46_C0_2010,
    TEXT_MS19S_X46_RESEARCH_01_BEFORE,
    TEXT_MS19S_X46_RESEARCH_01_DRAMA,
    TEXT_MS19S_X46_BATTLE_01_BEFORE,
    TEXT_MS19S_X46_BATTLE_01_DRAMA,
    TEXT_MS19S_X46_BATTLE_01_AFTER,
    TEXT_MS20S_X47_WD_0010,
    TEXT_MS20S_X47_RESEARCH_01_BEFORE,
    TEXT_MS20S_X47_RESEARCH_01_DRAMA,
    TEXT_MS20S_X47_WD_0020,
    TEXT_MS20S_X47_C0_1010,
    TEXT_MS20S_X47_BATTLE_01_BEFORE,
    TEXT_MS20S_X47_BATTLE_01_DRAMA,
    TEXT_MS20S_X47_BATTLE_01_AFTER,
    TEXT_MS20S_X47_C0_2010,
    TEXT_MS20S_X47_WD_0030,
    TEXT_MS20S_X47_C0_3010,
    TEXT_MS21S_X48_WD_0010,
    TEXT_MS21S_X48_BATTLE_01_BEFORE,
    TEXT_MS21S_X48_BATTLE_01_DRAMA,
    TEXT_MS21S_X48_BATTLE_01_AFTER,
    TEXT_MS21S_X48_C0_0030,
    TEXT_MS21S_X48_WD_0020,
    TEXT_MS21S_X48_BATTLE_02_BEFORE,
    TEXT_MS21S_X48_BATTLE_02_DRAMA,
    TEXT_MS21S_X48_BATTLE_02_AFTER,
    TEXT_MS21S_X48_WD_0040,
    TEXT_MS21S_X48_A0_0010,
    TEXT_MS21S_X48_A1_0010,
    TEXT_MS21S_X48_A0_1010,
    TEXT_MS21S_X48_A1_1010,
    TEXT_MS06_X07_HD010_010_010,
    TEXT_MS06_X07_BT020_010_010,
    TEXT_MS07_H01_HD010_010_010,
    TEXT_MS07_H01_VT010_010_010,
    TEXT_MS07_H01_VT010_020_010,
    TEXT_MS07_X08_HD010_010_010,
    TEXT_MS07_X08_HD020_010_010,
    TEXT_MS07_X08_RS010_010_010,
    TEXT_MS07_X08_BT010_010_010,
    TEXT_MS07_X08_BT010_020_010,
    TEXT_MS07_X08_BT910_010_010,
    TEXT_MS07_X08_BT910_010_020,
    TEXT_CS02_E01_0010,
    TEXT_CS02_E01_0020,
    TEXT_CS02_E01_0030,
    TEXT_CS02_E02_0010,
    TEXT_CS02_E02_0020,
    TEXT_CS02_E02_0030,
    TEXT_CS03_E01_0010,
    TEXT_CS03_E01_0020,
    TEXT_CS03_E01_0030,
    TEXT_CS03_E02_0010,
    TEXT_CS03_E02_0020,
    TEXT_CS03_E02_0030,
    TEXT_CS03_E02_0040,
    TEXT_CS03_E02_0050,
    TEXT_CS04_E01_0010,
    TEXT_CS04_E01_0020,
    TEXT_CS04_E02_0010,
    TEXT_CS04_E02_0020,
    TEXT_CS05_E01_0010,
    TEXT_CS05_E01_0020,
    TEXT_CS05_E01_0030,
    TEXT_CS05_E02_0010,
    TEXT_CS06_E01_0010,
    TEXT_CS06_E01_0020,
    TEXT_CS06_E01_0030,
    TEXT_CS06_E02_0010,
    TEXT_CS07_E01_0010,
    TEXT_CS07_E01_0020,
    TEXT_CS07_E01_0030,
    TEXT_CS07_E02_0010,
    TEXT_CS07_E02_0020,
    TEXT_CS07_E02_0030,
    TEXT_CS08_E01_0010,
    TEXT_CS08_E01_0020,
    TEXT_CS08_E01_0030,
    TEXT_CS08_E02_0010,
    TEXT_CS09_E01_0010,
    TEXT_CS09_E01_0020,
    TEXT_CS09_E01_0030,
    TEXT_CS09_E02_0010,
    TEXT_CS09_E02_0020,
    TEXT_CS10_E01_0010,
    TEXT_CS10_E01_0020,
    TEXT_CS10_E02_0010,
    TEXT_CS10_E02_0020,
    TEXT_CS10_E03_0010,
    TEXT_CS11_E01_0010,
    TEXT_CS11_E01_0020,
    TEXT_CS11_E01_0030,
    TEXT_CS11_E02_0010,
    TEXT_CS11_E03_0010,
    TEXT_CS12_E01_0010,
    TEXT_CS12_E01_0020,
    TEXT_CS12_E01_0030,
    TEXT_CS12_E02_0010,
    TEXT_CS13_E01_0010,
    TEXT_CS13_E01_0020,
    TEXT_CS13_E01_0030,
    TEXT_CS13_E02_0010,
    TEXT_CS14_E01_0010,
    TEXT_CS14_E01_0020,
    TEXT_CS14_E01_0030,
    TEXT_CS14_E02_0010,
    TEXT_CS15_E01_0010,
    TEXT_CS15_E02_0010,
    TEXT_CS16_E01_0010,
    TEXT_CS16_E01_0020,
    TEXT_CS16_E01_0030,
    TEXT_CS16_E02_0010,
    TEXT_CS17_E01_0010,
    TEXT_CS17_E02_0010,
    TEXT_CS17_E03_0010,
    TEXT_CS18_E01_0010,
    TEXT_CS18_E01_0020,
    TEXT_CS18_E02_0010,
    TEXT_CS18_E03_0010,
    TEXT_CS19_E01_0010,
    TEXT_CS19_E01_0020,
    TEXT_CS19_E02_0010,
    TEXT_CS19_E03_0010,
    TEXT_CS19_E01_010,
    TEXT_CS19_E01_020,
    TEXT_CS20_E01_0010,
    TEXT_CS20_E01_0020,
    TEXT_CS20_E02_0010,
    TEXT_CS20_E02_0020,
    TEXT_CS20_E02_0030,
    TEXT_CS20_E03_0010,
    TEXT_CS21_E01_0010,
    TEXT_CS21_E01_0020,
    TEXT_CS21_E02_0010,
    TEXT_CS21_E03_0010,
    TEXT_CS22_E01_0010,
    TEXT_CS22_E01_0020,
    TEXT_CS22_E01_0030,
    TEXT_CS22_E01_0040,
    TEXT_CS22_E02_0010,
    TEXT_CS22_E03_0010,
    TEXT_CS23_E01_0010,
    TEXT_CS23_E01_0020,
    TEXT_CS23_E02_0010,
    TEXT_CS23_E03_0010,
    TEXT_CS24_E01_0010,
    TEXT_CS24_E01_0020,
    TEXT_CS24_E02_0010,
    TEXT_CS24_E02_0020,
    TEXT_CS24_E02_0030,
    TEXT_CS24_E03_0010,
    TEXT_CS25_E01_0010,
    TEXT_CS25_E01_0020,
    TEXT_CS25_E02_0010,
    TEXT_CS25_E02_0020,
    TEXT_CS25_E03_0010,
    TEXT_CS26_E01_0010,
    TEXT_CS26_E01_0020,
    TEXT_CS26_E02_0010,
    TEXT_CS26_E03_0010,
    TEXT_CS27_E01_0010,
    TEXT_CS27_E02_0010,
    TEXT_CS27_E03_0010,
    TEXT_CS28_E01_0010,
    TEXT_CS28_E01_0020,
    TEXT_CS28_E02_0010,
    TEXT_CS28_E03_0010,
    TEXT_CS29_E01_0010,
    TEXT_CS29_E01_0020,
    TEXT_CS29_E02_0010,
    TEXT_CS29_E02_0020,
    TEXT_CS29_E02_0030,
    TEXT_CS29_E03_0010,
    TEXT_CS30_E01_0010,
    TEXT_CS30_E01_0020,
    TEXT_CS30_E02_0010,
    TEXT_CS30_E03_0010,
    TEXT_CS30_E03_0020,
    TEXT_X_STANDBY_DRAMA,
    TEXT_TRIAL_01_MS06_X07_WD_0010,
    TEXT_COUNT,
    TEXT_MAX UMETA(Hidden),
};
