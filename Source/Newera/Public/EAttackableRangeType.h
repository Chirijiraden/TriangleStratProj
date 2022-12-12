#pragma once
#include "CoreMinimal.h"
#include "EAttackableRangeType.generated.h"

UENUM(BlueprintType)
enum class EAttackableRangeType : uint8 {
    STANDARD,
    SPEAR,
    THROW_STRAIGHT,
    THROW_STRAIGHT_ONLYCROSS,
    THROW_STRAIGHT_JUDGEMENTRAY,
    THROW_PARABOLA,
    JUMP_MOVE,
    JUMP_MOVE_STRAIGHT,
    LADDER_P020,
    BURNABLE_OBJECT,
    EVERY,
    CROSS,
    CONE,
    TRAP,
    RECT,
    THROW_PARABOLA_BURNABLE_OBJECT,
    TRAP_ALL_TEAM,
};

