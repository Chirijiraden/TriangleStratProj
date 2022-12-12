#pragma once
#include "CoreMinimal.h"
#include "EButtonGuideCategory.generated.h"

UENUM(BlueprintType)
enum class EButtonGuideCategory : uint8 {
    GENERAL,
    MAP,
    WLORLDMAP,
    UI,
    TALK,
    NUM,
};

