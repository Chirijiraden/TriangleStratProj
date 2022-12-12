#pragma once
#include "CoreMinimal.h"
#include "EEvaluationInfoUnitActionSuppressionStatus.generated.h"

UENUM(BlueprintType)
enum class EEvaluationInfoUnitActionSuppressionStatus : uint8 {
    NONE,
    DISABLE_ACTION,
    ANGRY,
    SILENCE = 0x4,
    ALL = 0xFF,
};

