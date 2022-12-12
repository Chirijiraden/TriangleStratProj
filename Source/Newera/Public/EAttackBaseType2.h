#pragma once
#include "CoreMinimal.h"
#include "EAttackBaseType2.generated.h"

UENUM(BlueprintType)
enum class EAttackBaseType2 : uint8 {
    NONE,
    ANTI_FLY,
    ANTI_CAVALRY,
    ANTI_FLY_CAVALRY,
};

