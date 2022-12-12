#pragma once
#include "CoreMinimal.h"
#include "EEffectableRangeType.generated.h"

UENUM(BlueprintType)
enum class EEffectableRangeType : uint8 {
    POINT,
    CIRCLE,
    STRAIGHT,
    SPEAR,
    FRONT3,
    FRONT3_ONLY_NO_UNIT,
    FRONT5,
    AROUND,
    FROZEN_FLOOR,
    EXISTS_UNIT,
    EXISTS_UNIT_HP3,
    EXISTS_UNIT_HP4,
    EXISTS_UNIT_HP5,
    EXISTS_UNIT_RUCKEY_NUM,
    EXISTS_UNIT_TP,
    EXISTS_UNIT_TP_HIGHER,
    EXISTS_UNIT_HEIGHT,
    CROSS_AROUND,
    CONE,
    CIRCLE_RANDOM,
    CIRCLE_RANDOM_ONLY_NO_UNIT,
    RECT_AROUND,
    POINT_BURNABLE,
    CIRCLE_BURNABLE,
};

