#pragma once
#include "CoreMinimal.h"
#include "ETrajectoryParticleType.generated.h"

UENUM()
enum class ETrajectoryParticleType : int8 {
    NONE,
    NORMAL,
    DANGER,
    DANGER_SPECIAL,
    JUMP,
    JUDGEMENTRAY,
    SHORYUKEN,
    MOVE_UNIT,
};

