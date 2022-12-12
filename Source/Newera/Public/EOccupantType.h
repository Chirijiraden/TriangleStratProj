#pragma once
#include "CoreMinimal.h"
#include "EOccupantType.generated.h"

UENUM(BlueprintType)
enum class EOccupantType : uint8 {
    NONE,
    FRIENDLY_UNIT,
    ENEMY_UNIT,
    NEUTRAL_UNIT,
    OBJECT,
    MAX,
};

