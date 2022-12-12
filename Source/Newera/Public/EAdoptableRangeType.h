#pragma once
#include "CoreMinimal.h"
#include "EAdoptableRangeType.generated.h"

UENUM(BlueprintType)
enum class EAdoptableRangeType : uint8 {
    LEAST_ONE_UNIT,
    NO_UNIT,
    NO_UNIT_ON_CURSORPOINT,
    LEAST_ONE_UNIT_AND_NO_UNIT_ON_CURSORPOINT,
    NO_CONDITIONAL,
    CAN_SWAP_UNIT,
};

