#pragma once
#include "CoreMinimal.h"
#include "EAccessoryUseUnitListWidgetOpenStatus.generated.h"

UENUM(BlueprintType)
enum class EAccessoryUseUnitListWidgetOpenStatus : uint8 {
    Closed,
    Opening,
    Opened,
    Closing,
};

