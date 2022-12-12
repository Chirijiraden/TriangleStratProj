#pragma once
#include "CoreMinimal.h"
#include "EAutoReviveState.generated.h"

UENUM(BlueprintType)
enum class EAutoReviveState : uint8 {
    NONE,
    WAIT_DAMAGE,
    EFFECT,
};

