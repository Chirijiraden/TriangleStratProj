#pragma once
#include "CoreMinimal.h"
#include "ENeweraStateFastForward.generated.h"

UENUM(BlueprintType)
enum class ENeweraStateFastForward : uint8 {
    INVALID,
    NO_OPERATION,
    ON_STANDBY,
    ON_FASTFORWARD,
};

