#pragma once
#include "CoreMinimal.h"
#include "ECameraMode.generated.h"

UENUM(BlueprintType)
enum class ECameraMode : uint8 {
    Normal,
    Overlooking,
    MapLookinging,
    Max,
};

