#pragma once
#include "CoreMinimal.h"
#include "EWorldMapStagingObject.generated.h"

UENUM(BlueprintType)
enum class EWorldMapStagingObject : uint8 {
    MILITARYSYMBOL,
    TRAJECTORY,
    ENGAGEICON,
    ALL,
};

