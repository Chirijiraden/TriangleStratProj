#pragma once
#include "CoreMinimal.h"
#include "EAccessoryEquipListInventoryModes.generated.h"

UENUM(BlueprintType)
enum class EAccessoryEquipListInventoryModes : uint8 {
    None,
    InventoryDetachList,
    HoveredInventoryOwnerList,
};

