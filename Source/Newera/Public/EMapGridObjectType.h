#pragma once
#include "CoreMinimal.h"
#include "EMapGridObjectType.generated.h"

UENUM()
enum class EMapGridObjectType : int32 {
    DUMMY,
    TROLLEY,
    TROLLEY_STATION,
};

