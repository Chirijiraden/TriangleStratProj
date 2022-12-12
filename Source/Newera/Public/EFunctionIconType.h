#pragma once
#include "CoreMinimal.h"
#include "EFunctionIconType.generated.h"

UENUM(BlueprintType)
enum class EFunctionIconType : uint8 {
    NOATTRIBUTE,
    FIRE,
    ICE,
    WIND,
    THUNDER,
    RECOVERY,
    BUFF,
    DEBUFF,
    ETC,
    ACCESSORY,
    UPGRADEMATERIAL,
    ALCHEMICMATERIAL,
    FIRSTCLASSMEDAL,
    SECONDCLASSMEDAL,
    IMPORTANTITEM,
    NONE,
};

