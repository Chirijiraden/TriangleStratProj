#pragma once
#include "CoreMinimal.h"
#include "EAttackEvaluationType.generated.h"

UENUM(BlueprintType)
enum class EAttackEvaluationType : uint8 {
    DAMAGE,
    HEAL,
    BUFF,
    DEBUFF,
    STATUS_EFFECT,
    POSITIONING,
    OTHER,
};

