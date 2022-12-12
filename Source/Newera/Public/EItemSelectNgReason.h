#pragma once
#include "CoreMinimal.h"
#include "EItemSelectNgReason.generated.h"

UENUM(BlueprintType)
enum class EItemSelectNgReason : uint8 {
    None,
    Unhandled,
    TestTradeNg,
    Exchanged,
    SoldOut,
    OtherReason,
};

