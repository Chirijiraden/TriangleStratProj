#pragma once
#include "CoreMinimal.h"
#include "ESoundCategory.generated.h"

UENUM(BlueprintType)
enum class ESoundCategory : uint8 {
    BGM,
    SE,
    VOICE,
    SE_ADV,
    SE_BTL,
    SE_ENV,
    SE_OBJ,
    SE_SYS,
    SE_FOOT,
    VOICE_ADV,
    VOICE_BTL,
    VOICE_VOTE,
    _2D = 0xF0,
    _3D,
    LUA_SOUND,
    LUA_SOUND_SCENARIO_SCRIPT,
    AUDIO_DEVICE,
    AMBIENT,
    LOOP,
};

