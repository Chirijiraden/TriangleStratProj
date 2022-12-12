#pragma once
#include "CoreMinimal.h"
#include "EEvaluationInfoUnitQueueableActionCollectFlag.generated.h"

UENUM(BlueprintType)
enum class EEvaluationInfoUnitQueueableActionCollectFlag : uint8 {
    NONE,
    ABILITY,
    WEAPON,
    ITEM = 0x4,
    ALL = 0xFF,
};

