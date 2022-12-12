#pragma once
#include "CoreMinimal.h"
#include "BlockDirType.generated.h"

UENUM(BlueprintType)
enum class BlockDirType : uint8 {
    UP,
    DOWN,
    LEFT,
    RIGHT,
};

