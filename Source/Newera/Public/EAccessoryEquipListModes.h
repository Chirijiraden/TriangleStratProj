#pragma once
#include "CoreMinimal.h"
#include "EAccessoryEquipListModes.generated.h"

UENUM(BlueprintType)
enum class EAccessoryEquipListModes : uint8 {
    None,
    Default,
    OwnerList,
    HoveredInventoryOwnerList,
    InventoryDetachList,
};

