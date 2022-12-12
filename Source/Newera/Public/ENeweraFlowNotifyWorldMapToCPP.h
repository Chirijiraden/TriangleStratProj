#pragma once
#include "CoreMinimal.h"
#include "ENeweraFlowNotifyWorldMapToCPP.generated.h"

UENUM(BlueprintType)
enum class ENeweraFlowNotifyWorldMapToCPP : uint8 {
    START_FREE_CURSOR,
    CLOSE_MAINMENU,
    GO_TO_STATION,
    BACK_FROM_STATION,
    CLOSE_BACKLOG,
    END_SPECIALSAVEDIALOG_GO,
    END_SPECIALSAVEDIALOG_BACK,
};

