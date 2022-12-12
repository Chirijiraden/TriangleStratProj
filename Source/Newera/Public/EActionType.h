#pragma once
#include "CoreMinimal.h"
#include "EActionType.generated.h"

UENUM(BlueprintType)
enum class EActionType : uint8 {
    None,
    Idle,
    BattleIdle,
    Talk,
    Walk,
    Run,
    Jump,
    PathMove,
    CustomAnimation,
    Max,
};

