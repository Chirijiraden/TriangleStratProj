#pragma once
#include "CoreMinimal.h"
#include "EADSoundAudioDeviceType.generated.h"

UENUM(BlueprintType)
enum class EADSoundAudioDeviceType : uint8 {
    INVALID,
    BUILTIN_SPEAKER,
    TV,
    STEREO_JACK,
    USB_DEVICE,
};

