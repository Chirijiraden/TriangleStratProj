#pragma once
#include "CoreMinimal.h"
#include "EMapGridWarpType.generated.h"

UENUM(BlueprintType)
enum class EMapGridWarpType : uint8 {
    NONE,
    ZIPLINE,
    HARPOON,
    LADDER,
    DOOR,
    TROLLEY,
};

