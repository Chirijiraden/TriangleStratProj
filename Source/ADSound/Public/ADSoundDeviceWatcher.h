#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ADSoundDeviceWatcher.generated.h"

UCLASS(Blueprintable)
class ADSOUND_API UADSoundDeviceWatcher : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* AtomDeviceWatcher;
    
public:
    UADSoundDeviceWatcher();
};

