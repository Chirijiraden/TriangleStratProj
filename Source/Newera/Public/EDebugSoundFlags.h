#pragma once
#include "CoreMinimal.h"
#include "EDebugSoundFlags.generated.h"

UENUM(BlueprintType)
enum class EDebugSoundFlags : uint8 {
    MUTE_BGM,
    MUTE_SE,
    MUTE_VOICE,
    DRAW_ATTENUATIONSHAPE,
    DebugSoundEnd,
};

