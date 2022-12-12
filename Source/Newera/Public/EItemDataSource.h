#pragma once
#include "CoreMinimal.h"
#include "EItemDataSource.generated.h"

UENUM(BlueprintType)
enum class EItemDataSource : uint8 {
    None,
    ConsumerItem,
    Accessory,
    UpgradeMaterial,
    MedalItem,
    Note,
    BattleOrder,
    EquipCommand,
    ParameterChangeItem,
    MAX,
};

