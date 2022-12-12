#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8 {
    NONE,
    SWORD,
    DAGGER,
    AX,
    SPEAR,
    SHIELD,
    BOW,
    STAFF,
    KNUCKLE,
    WHIP,
    MUSIC,
};

