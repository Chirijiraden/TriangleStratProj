#pragma once
#include "CoreMinimal.h"
#include "ENeweraKeyIconDeviceType.generated.h"

UENUM(BlueprintType)
enum class ENeweraKeyIconDeviceType : uint8 {
    NONE,
    CONTROLLER,
    KEYBOARD,
    NUM,
};

