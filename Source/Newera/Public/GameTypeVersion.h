#pragma once
#include "CoreMinimal.h"
#include "GameTypeVersion.generated.h"

UENUM(BlueprintType)
enum class GameTypeVersion : uint8 {
    PRODUCT_VERSION,
    TRIAL_VERSION1,
    TRIAL_VERSION2,
};

