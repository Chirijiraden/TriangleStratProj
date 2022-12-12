#pragma once
#include "CoreMinimal.h"
#include "ESpawnPlaceType.generated.h"

UENUM(BlueprintType)
enum class ESpawnPlaceType : uint8 {
    SPAWN_CENTER,
    SPAWN_EACH_PLACE,
    SPAWN_MAX UMETA(Hidden),
};

