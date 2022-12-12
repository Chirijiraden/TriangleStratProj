#pragma once
#include "CoreMinimal.h"
#include "EWeaponEquipmentType.generated.h"

UENUM(BlueprintType)
enum class EWeaponEquipmentType : uint8 {
    Base,
    Battle,
    BaseAdd,
    BattleAdd,
    Max,
};

