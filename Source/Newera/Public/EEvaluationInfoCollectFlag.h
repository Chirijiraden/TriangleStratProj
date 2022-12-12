#pragma once
#include "CoreMinimal.h"
#include "EEvaluationInfoCollectFlag.generated.h"

UENUM(BlueprintType)
enum class EEvaluationInfoCollectFlag : uint8 {
    NONE,
    FRIENDLY_UNIT,
    ENEMY_UNIT,
    NEUTRAL_UNIT = 0x4,
    OBJECT = 0x8,
    ALL = 0xFFFF,
};

