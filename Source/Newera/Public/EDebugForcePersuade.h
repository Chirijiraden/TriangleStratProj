#pragma once
#include "CoreMinimal.h"
#include "EDebugForcePersuade.generated.h"

UENUM(BlueprintType)
enum class EDebugForcePersuade : uint8 {
    NONE,
    SUCCESS,
    FAIL,
    End,
};

