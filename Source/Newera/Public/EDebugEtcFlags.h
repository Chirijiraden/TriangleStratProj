#pragma once
#include "CoreMinimal.h"
#include "EDebugEtcFlags.generated.h"

UENUM(BlueprintType)
enum class EDebugEtcFlags : uint8 {
    EnableInputMouse,
    DebugEtcDontDeleteContinueData,
    DebugEtcAlwaysFailSavingGameData,
    DebugEtcAlwaysFailLoadingGameData,
    DebugEtcAlwaysFailSavingSystemData,
    DebugEtcAlwaysFailLoadingSystemData,
    DebugEtcDisableTitleLogo,
    DebugEtcForceStartTitleCredit,
    DebugEtcEnd,
};

