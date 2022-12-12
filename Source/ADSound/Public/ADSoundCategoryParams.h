#pragma once
#include "CoreMinimal.h"
#include "ADSoundCategoryParams.generated.h"

class UADSoundInterpFloat;

USTRUCT(BlueprintType)
struct FADSoundCategoryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundInterpFloat* DynamicVolumeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundInterpFloat* VolumeFadeParam;
    
    ADSOUND_API FADSoundCategoryParams();
};

