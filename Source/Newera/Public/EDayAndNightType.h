#pragma once
#include "CoreMinimal.h"
#include "EDayAndNightType.generated.h"

UENUM(BlueprintType)
enum class EDayAndNightType : uint8 {
    NONE,
    DAY,
    NIGHT,
    MAX,
};

