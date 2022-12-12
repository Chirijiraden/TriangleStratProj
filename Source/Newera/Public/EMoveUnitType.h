#pragma once
#include "CoreMinimal.h"
#include "EMoveUnitType.generated.h"

UENUM(BlueprintType)
enum class EMoveUnitType : uint8 {
    OFFSET,
    ATTACK_TARGET,
    OPTIONAL_MOVE,
    OPTIONAL_MOVE_FOR_DEFENDER,
    ATTACKER_DIR_FROM_TARGET,
};

