#pragma once
#include "CoreMinimal.h"
#include "EBlendCoordinate.generated.h"

UENUM(BlueprintType)
enum class EBlendCoordinate : uint8 {
    Auto,
    AroundActor,
    World,
};

