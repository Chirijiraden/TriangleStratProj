#pragma once
#include "CoreMinimal.h"
#include "EAbilityEffect.generated.h"

UENUM(BlueprintType)
enum class EAbilityEffect : uint8 {
    ATTACK,
    SPECIAL,
    ATTACK_SPECIAL,
    EVENT,
};

