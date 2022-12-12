#pragma once
#include "CoreMinimal.h"
#include "ENeweraButton.generated.h"

UENUM(BlueprintType)
enum class ENeweraButton : uint8 {
    Up,
    Down,
    Left,
    Right,
    RUp,
    RDown,
    RRight,
    RLeft,
    LShoulder,
    LTrigger,
    RShoulder,
    RTrigger,
    StickL_Up,
    StickL_Down,
    StickL_Left,
    StickL_Right,
    StickL_Button,
    StickR_Up,
    StickR_Down,
    StickR_Left,
    StickR_Right,
    StickR_Button,
    SpecialRight,
    SpecialLeft,
    LeftMouseButton,
    RightMouseButton,
    MiddleMouseButton,
    ThumbMouseButton,
    ThumbMouseButton2,
    CameraQuickMove,
    Num,
};

