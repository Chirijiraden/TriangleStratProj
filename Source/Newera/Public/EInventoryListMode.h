#pragma once
#include "CoreMinimal.h"
#include "EInventoryListMode.generated.h"

UENUM(BlueprintType)
enum class EInventoryListMode : uint8 {
    None,
    ListByItem,
    ListByOwnerForSell,
    EquipChange,
};

