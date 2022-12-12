#pragma once
#include "CoreMinimal.h"
#include "EJumpMoveState.generated.h"

UENUM(BlueprintType)
enum class EJumpMoveState : uint8 {
    NONE,
    UP_CROUCH,
    UP_JUMP,
    DOWN_JUMP,
    DOWN_FALL,
    DOWN_CROUCH,
    DOWN_CROUCH_MOVABLE,
};

