#pragma once
#include "CoreMinimal.h"
#include "ENeweraCollisionChannelType2D.generated.h"

UENUM(BlueprintType)
enum class ENeweraCollisionChannelType2D : uint8 {
    NONE,
    CURSOR,
    ICON,
    ALL = 0xFF,
};

