#pragma once
#include "CoreMinimal.h"
#include "ENeweraUICategories.generated.h"

UENUM(BlueprintType)
enum class ENeweraUICategories : uint8 {
    None,
    Core,
    FastForward,
    AutoMode = 0x2,
    FloatUI = 0x4,
    FloatUI2 = 0x8,
    GameCommon = 0x10,
    WorldMapOnly = 0x20,
    WorldMapOnly2 = 0x40,
    WorldMapOnly3 = 0x80,
    ResearchOnly = 0x100,
    BattleCommon = 0x200,
    BattlePreparationOnly = 0x400,
    BattleOnly = 0x800,
    BattleOnly2 = 0x1000,
    BattleOnly3 = 0x2000,
    TitleOnly = 0x4000,
    EndingOnly = 0x8000,
    StaffRollOnly = 0x10000,
    All = 0x1FFFF,
    WorldMap = 0xFF,
    Research = 0x11F,
    Battle = 0xE1F,
    BattlePrepagation = 0xE1F,
    Title = 0x14001,
    Ending = 0x18001,
    ENeweraUICategories_MAX = 0x20000,
};

