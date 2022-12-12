#pragma once
#include "CoreMinimal.h"
#include "ENeweraItemListCategories.generated.h"

UENUM(BlueprintType)
enum class ENeweraItemListCategories : uint8 {
    ALL,
    CONSUMER_ITEMS,
    ACCESSORIES,
    UPGRADE_MATERIALS,
    ETC,
    MAX,
};

