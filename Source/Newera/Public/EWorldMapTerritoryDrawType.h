#pragma once
#include "CoreMinimal.h"
#include "EWorldMapTerritoryDrawType.generated.h"

UENUM(BlueprintType)
enum class EWorldMapTerritoryDrawType : uint8 {
    DUMMY,
    DEFAULT,
    A0_TO_B0,
    A0_A1_2_TO_B0,
    A0_A1_TO_B0,
    A0_A1_A2_TO_B0,
    A_ALL_TO_B0,
    A0_A1_2_A2_TO_B0,
    A0_A1_2_A2_A3_TO_B0,
    A0_A1_2_A2_A3_TO_B0_A1_TO_C0,
    A1_2_TO_B0,
    A1_A1_2_TO_C0,
    C0_TO_A0,
    A_ALL_TO_C0,
    ALL_TO_C0,
    A1_TO_C0_AND_A0_TO_B0,
    ALL_TO_A0,
    B0_TO_C0,
};

