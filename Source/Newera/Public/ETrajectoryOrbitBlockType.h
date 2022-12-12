#pragma once
#include "CoreMinimal.h"
#include "ETrajectoryOrbitBlockType.generated.h"

UENUM(BlueprintType)
enum class ETrajectoryOrbitBlockType : uint8 {
    ATTACK,
    JUMP_MOVE,
};

