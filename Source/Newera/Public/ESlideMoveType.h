#pragma once
#include "CoreMinimal.h"
#include "ESlideMoveType.generated.h"

UENUM(BlueprintType)
enum class ESlideMoveType : uint8 {
    STANDARD,
    ATTACK_TARGET,
    ATTACKER_DIR_FROM_TARGET,
    DEFENDER_MOVE_TARGET,
    ABILITY_THROW_AWAY,
};

