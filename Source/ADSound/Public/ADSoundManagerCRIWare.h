#pragma once
#include "CoreMinimal.h"
#include "ADSoundManagerBase.h"
#include "ADSoundPlaybackId.h"
#include "ADSoundManagerCRIWare.generated.h"

UCLASS(Blueprintable)
class ADSOUND_API UADSoundManagerCRIWare : public UADSoundManagerBase {
    GENERATED_BODY()
public:
    UADSoundManagerCRIWare();
    UFUNCTION(BlueprintCallable)
    void SetAisacParamById(const FADSoundPlaybackId& PlaybackId, int32 AisacId, float AisacValue);
    
};

