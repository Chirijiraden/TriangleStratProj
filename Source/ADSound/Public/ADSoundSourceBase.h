#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ADSoundSourceBase.generated.h"

class UADSoundListenerBase;
class UADSoundInterpFloat;
class USoundAttenuation;

UCLASS(Blueprintable)
class UADSoundSourceBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* SoundAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundListenerBase* Listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundInterpFloat* OcclusionVolumeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundInterpFloat* OcclusionCutOffFilterFrequencyHigh;
    
public:
    UADSoundSourceBase();
};

