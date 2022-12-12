#pragma once
#include "CoreMinimal.h"
#include "ECounterSpecialType.generated.h"

UENUM(BlueprintType)
enum class ECounterSpecialType : uint8 {
    NONE,
    ALL_BASE_TYPE_MELEE,
    COUNTERSPLTYPE_MAX UMETA(Hidden),
};

