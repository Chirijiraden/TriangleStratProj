#pragma once
#include "CoreMinimal.h"
#include "EAttackBaseType.generated.h"

UENUM(BlueprintType)
enum class EAttackBaseType : uint8 {
    PHYSICS,
    MAGIC,
    SPECIAL,
};

