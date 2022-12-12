#pragma once
#include "CoreMinimal.h"
#include "ADSoundDeviceWatcher.h"
#include "NeweraSoundDeviceWatcher.generated.h"

UCLASS(Blueprintable)
class UNeweraSoundDeviceWatcher : public UADSoundDeviceWatcher {
    GENERATED_BODY()
public:
    UNeweraSoundDeviceWatcher();
};

