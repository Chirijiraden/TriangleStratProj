#pragma once
#include "CoreMinimal.h"
#include "ETerritoryType.generated.h"

UENUM(BlueprintType)
enum class ETerritoryType : uint8 {
    TERRITORY_A0,
    TERRITORY_B0,
    TERRITORY_C0,
    TERRITORY_A1,
    TERRITORY_A2,
    TERRITORY_A3,
    TERRITORY_MAX UMETA(Hidden),
};

