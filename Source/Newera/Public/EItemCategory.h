#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.generated.h"

UENUM(BlueprintType)
enum class EItemCategory : uint8 {
    NONE,
    ITEM,
    NEGOTIATE,
    MATERIAL,
    EVENT,
    ACCESSORY,
    MEDAL,
    GOLD,
};

