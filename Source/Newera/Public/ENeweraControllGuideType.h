#pragma once
#include "CoreMinimal.h"
#include "ENeweraControllGuideType.generated.h"

UENUM(BlueprintType)
enum class ENeweraControllGuideType : uint8 {
    DIRECTION_KEY,
    STICK_L_TILT,
    STICK_R_TILT,
    STICK_L_PUSH,
    STICK_R_PUSH,
    R_UP,
    R_DOWN,
    R_LEFT,
    R_RIGHT,
    SHOULDER_L,
    SHOULDER_R,
    TRIGGER_L,
    TRIGGER_R,
    SPECIAL_L,
    SPECIAL_R,
};

