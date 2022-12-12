#pragma once
#include "CoreMinimal.h"
#include "EAttackType.generated.h"

UENUM(BlueprintType)
enum class EAttackType : uint8 {
    MELLE,
    THROW_LINER,
    THROW_PARABOLA,
    GENERATE,
};

