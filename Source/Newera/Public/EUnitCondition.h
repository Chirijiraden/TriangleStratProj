#pragma once
#include "CoreMinimal.h"
#include "EUnitCondition.generated.h"

UENUM(BlueprintType)
enum class EUnitCondition : uint8 {
    BAD,
    NORMAL,
    GOOD,
    VERYGOOD,
    MAX,
};

