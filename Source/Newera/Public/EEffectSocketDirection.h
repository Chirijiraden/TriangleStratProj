#pragma once
#include "CoreMinimal.h"
#include "EEffectSocketDirection.generated.h"

UENUM(BlueprintType)
enum class EEffectSocketDirection : uint8 {
    SOCKET,
    DEFENDER_TARGET,
};

