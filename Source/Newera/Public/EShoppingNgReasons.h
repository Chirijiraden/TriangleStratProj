#pragma once
#include "CoreMinimal.h"
#include "EShoppingNgReasons.generated.h"

UENUM(BlueprintType)
enum class EShoppingNgReasons : uint8 {
    None,
    ItemNotFound,
    ValidationError,
    NotEnoughItems,
    ItemExceedsMaxmimumCount,
    NotEnoughMoney,
    MoneyExceedsMaximumValue,
    Unknown,
};

