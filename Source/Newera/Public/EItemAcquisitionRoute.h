#pragma once
#include "CoreMinimal.h"
#include "EItemAcquisitionRoute.generated.h"

UENUM(BlueprintType)
enum class EItemAcquisitionRoute : uint8 {
    NONE,
    WHITE_BAG,
    SILVER_BAG,
    GOLD_BAG,
    BONUS_ITEM,
    TREASURE_BOX,
    STEAL,
    BOSS_DROP,
};

