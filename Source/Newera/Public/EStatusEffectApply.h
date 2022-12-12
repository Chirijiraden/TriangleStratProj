#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectApply.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectApply : uint8 {
    APPLY,
    NOTAPPLY,
    OVERRIDE,
};

