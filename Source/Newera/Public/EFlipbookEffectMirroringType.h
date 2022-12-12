#pragma once
#include "CoreMinimal.h"
#include "EFlipbookEffectMirroringType.generated.h"

UENUM(BlueprintType)
enum class EFlipbookEffectMirroringType : uint8 {
    FACE_CAMERA_2D,
    FACE_CAMERA_3D,
    ATTACH_CHARACTER_DIRECTION,
};

