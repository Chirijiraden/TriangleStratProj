#pragma once
#include "CoreMinimal.h"
#include "EOptionalEffect.generated.h"

UENUM(BlueprintType)
enum class EOptionalEffect : uint8 {
    NONE,
    CHANGE_LOCATION,
    CHANGE_DIRECTION,
    SELECT_EXCHANGE_UNIT,
};

