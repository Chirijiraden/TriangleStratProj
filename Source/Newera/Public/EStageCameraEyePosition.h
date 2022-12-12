#pragma once
#include "CoreMinimal.h"
#include "EStageCameraEyePosition.generated.h"

UENUM(BlueprintType)
enum class EStageCameraEyePosition : uint8 {
    CurrentSetting,
    CurrentPosition,
};

