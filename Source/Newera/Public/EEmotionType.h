#pragma once
#include "CoreMinimal.h"
#include "EEmotionType.generated.h"

UENUM(BlueprintType)
enum class EEmotionType : uint8 {
    EMOTION_NOTICE,
    EMOTION_QUESTION,
    EMOTION_SWEAT,
    EMOTION_LIVELY,
    EMOTION_SILENCE,
    EMOTION_SHOCK,
    EMOTION_MAX UMETA(Hidden),
};

