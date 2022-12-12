#pragma once
#include "CoreMinimal.h"
#include "EWorldIconType.generated.h"

UENUM(BlueprintType)
enum class EWorldIconType : uint8 {
    MAIN_STORY,
    MAIN_VOTE,
    MAIN_VOTE_CRITICAL,
    MAIN_RESEARCH,
    MAIN_BATTLE,
    SUB_STORY,
    SUB_JO,
    SUB_HA,
    SUB_KYU,
    OPTIONAL_RESEARCH,
    MAX,
};

