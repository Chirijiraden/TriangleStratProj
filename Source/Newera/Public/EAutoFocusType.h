#pragma once
#include "CoreMinimal.h"
#include "EAutoFocusType.generated.h"

UENUM(BlueprintType)
enum class EAutoFocusType : uint8 {
    SINGLE_DAMAGE,
    AREA_DAMAGE,
    SINGLE_HEAL,
    AREA_HEAL,
    TP_DAMAGE,
    TP_HEAL,
    STATUS_EFFECT_APPLY,
    STATUS_EFFECT_HEAL,
    BUFF_DEBUFF_HIGH,
    BUFF_DEBUFF_LOW,
    NEAREST,
    TURN_ORDER,
    NONE,
};

