#pragma once
#include "CoreMinimal.h"
#include "EShopId.generated.h"

UENUM(BlueprintType)
enum class EShopId : uint8 {
    None,
    ToolShopDefault,
    PeddlerDefault,
    ExchangeDefault,
};

