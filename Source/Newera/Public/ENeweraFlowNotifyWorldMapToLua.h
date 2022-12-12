#pragma once
#include "CoreMinimal.h"
#include "ENeweraFlowNotifyWorldMapToLua.generated.h"

UENUM(BlueprintType)
enum class ENeweraFlowNotifyWorldMapToLua : uint8 {
    INVALID,
    POST_INITIALIZE,
    ON_DECIDE_EVENT,
    PRE_END_LEVEL,
    OPEN_MAINMENU,
    OPEN_BACKLOG,
    OPEN_SPECIALSAVEDIALOG,
};

