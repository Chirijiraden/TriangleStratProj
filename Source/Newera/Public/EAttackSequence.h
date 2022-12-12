#pragma once
#include "CoreMinimal.h"
#include "EAttackSequence.generated.h"

UENUM(BlueprintType)
enum class EAttackSequence : uint8 {
    FIRST_ATTACK,
    PURSUIT_ATTACK,
    COUNTER_ATTACK,
    AUTO_ATTACK,
    MAX_ATTACK,
};

