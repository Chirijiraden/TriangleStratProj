#pragma once
#include "CoreMinimal.h"
#include "EUnitAIType.generated.h"

UENUM(BlueprintType)
enum class EUnitAIType : uint8 {
    NONE,
    NORMAL,
    ANGRY,
    A1_ESCAPE,
    A1_ENEMY,
    RESTRICT_MOVE,
    RESTRICT_ATTACK,
    RESTRICT_MOVE_AND_ATTACK,
};

