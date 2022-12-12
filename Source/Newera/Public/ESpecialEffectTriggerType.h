#pragma once
#include "CoreMinimal.h"
#include "ESpecialEffectTriggerType.generated.h"

UENUM(BlueprintType)
enum class ESpecialEffectTriggerType : uint8 {
    NO_EFFECT,
    PLUS_EFFECT,
    MINUS_EFFECT,
};

