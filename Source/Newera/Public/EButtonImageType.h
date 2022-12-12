#pragma once
#include "CoreMinimal.h"
#include "EButtonImageType.generated.h"

UENUM(BlueprintType)
enum class EButtonImageType : uint8 {
    R_RIGHT,
    R_DOWN,
    R_UP,
    R_LEFT,
    R_SPECIAL,
    L_SPECIAL,
    L_SHOULDER,
    R_SHOULDER,
    L_TRIGGER,
    R_TRIGGER,
    L_STICK,
    R_STICK,
    L_STICK_B,
    R_STICK_B,
    UNDEFINED,
};

