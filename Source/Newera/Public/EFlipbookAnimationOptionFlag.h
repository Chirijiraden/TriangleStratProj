#pragma once
#include "CoreMinimal.h"
#include "EFlipbookAnimationOptionFlag.generated.h"

UENUM(BlueprintType)
enum class EFlipbookAnimationOptionFlag : uint8 {
    NONE,
    EFFECT_OFF,
    SE_OFF,
    VOICE_OFF = 0x4,
    RANDOM_START = 0x8,
    WEAPON_OFF = 0x10,
    FOOTSTEP_OFF = 0x20,
    REVERSE = 0x40,
    ALL = 0xFF,
};

