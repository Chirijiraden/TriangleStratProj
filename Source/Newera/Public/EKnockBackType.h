#pragma once
#include "CoreMinimal.h"
#include "EKnockBackType.generated.h"

UENUM(BlueprintType)
enum class EKnockBackType : uint8 {
    NONE,
    SIMPLE_MOVE,
    HIT_LAND,
    HIT_UNIT,
    FALL,
    FALL_FLYING,
    TACKLE,
};

