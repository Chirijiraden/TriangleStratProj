#pragma once
#include "CoreMinimal.h"
#include "ENeweraMouseButtonAction.generated.h"

UENUM(BlueprintType)
enum class ENeweraMouseButtonAction : uint8 {
    Decide,
    Cancel,
    Special,
    Detail,
    Camera,
    CameraSnap,
    Num,
};

