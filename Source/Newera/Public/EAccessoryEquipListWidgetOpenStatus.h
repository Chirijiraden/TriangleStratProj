#pragma once
#include "CoreMinimal.h"
#include "EAccessoryEquipListWidgetOpenStatus.generated.h"

UENUM(BlueprintType)
enum class EAccessoryEquipListWidgetOpenStatus : uint8 {
    Closed,
    Opening,
    Opened,
    Closing,
};

