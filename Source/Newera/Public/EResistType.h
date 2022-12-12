#pragma once
#include "CoreMinimal.h"
#include "EResistType.generated.h"

UENUM(BlueprintType)
enum class EResistType : uint8 {
    Poison,
    Paralysis,
    Silence,
    Sleep,
    Immovable,
    Blind,
    Angry,
    Charm,
    Stunning,
    Death,
    KnockBack,
    Max,
};

