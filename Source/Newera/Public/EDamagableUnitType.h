#pragma once
#include "CoreMinimal.h"
#include "EDamagableUnitType.generated.h"

UENUM(BlueprintType)
enum class EDamagableUnitType : uint8 {
    NONE,
    ALL,
    ONLY_PLAYERTEAM_UNIT,
};

