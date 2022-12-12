#pragma once
#include "CoreMinimal.h"
#include "EHitState.generated.h"

UENUM(BlueprintType)
enum class EHitState : uint8 {
    NO_HIT,
    HIT,
    CRITICAL,
    WEAK,
    CRITICAL_AND_WEAK,
};

