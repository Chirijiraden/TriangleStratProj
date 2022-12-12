#pragma once
#include "CoreMinimal.h"
#include "EUnitCamp.generated.h"

UENUM(BlueprintType)
enum class EUnitCamp : uint8 {
    FRIEND,
    ENEMY,
    NEUTRAL,
};

