#pragma once
#include "CoreMinimal.h"
#include "ECellInfoMovableUpdateType.generated.h"

UENUM(BlueprintType)
enum class ECellInfoMovableUpdateType : uint8 {
    ALL,
    FORWARD,
    REVERSE,
};

