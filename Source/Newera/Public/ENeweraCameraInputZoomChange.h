#pragma once
#include "CoreMinimal.h"
#include "ENeweraCameraInputZoomChange.generated.h"

UENUM(BlueprintType)
enum class ENeweraCameraInputZoomChange : uint8 {
    ZOOM_IN,
    ZOOM_OUT,
    ZOOM_MAX UMETA(Hidden),
};

