#pragma once
#include "CoreMinimal.h"
#include "EChangingIntensity.generated.h"

UENUM(BlueprintType)
enum class EChangingIntensity : uint8 {
    MinusHigh,
    MinusLow,
    Zero,
    PlusLow,
    PlusHigh,
    PlusVeryHigh,
    Max,
};

