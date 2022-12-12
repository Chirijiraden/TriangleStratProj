#pragma once
#include "CoreMinimal.h"
#include "EGameFlowMode.generated.h"

UENUM(BlueprintType)
enum class EGameFlowMode : uint8 {
    INVALID,
    TITLE,
    RESEARCH,
    BATTLE_PREPARATION,
    BATTLE,
    WORLD_MAP,
    ENDING,
};

