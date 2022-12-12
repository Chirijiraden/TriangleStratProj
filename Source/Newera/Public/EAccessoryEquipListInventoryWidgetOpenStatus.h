#pragma once
#include "CoreMinimal.h"
#include "EAccessoryEquipListInventoryWidgetOpenStatus.generated.h"

UENUM(BlueprintType)
enum class EAccessoryEquipListInventoryWidgetOpenStatus : uint8 {
    Closed,
    Opening,
    Opened,
    Closing,
};

