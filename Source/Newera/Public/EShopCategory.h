#pragma once
#include "CoreMinimal.h"
#include "EShopCategory.generated.h"

UENUM(BlueprintType)
enum class EShopCategory : uint8 {
    NONE,
    TOOL_SHOP,
    PEDDLER,
    EXCHANGE,
    MAX,
};

