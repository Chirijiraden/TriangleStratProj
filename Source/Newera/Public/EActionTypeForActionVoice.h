#pragma once
#include "CoreMinimal.h"
#include "EActionTypeForActionVoice.generated.h"

UENUM(BlueprintType)
enum class EActionTypeForActionVoice : uint8 {
    NO_VOICE,
    INVALID,
    NORMAL_ATTACK,
    ABILITY1,
    ABILITY2,
    ABILITY3,
    ABILITY4,
    ABILITY5,
    ABILITY6,
    ABILITY7,
    ABILITY_WEAPON,
    ITEM,
};

