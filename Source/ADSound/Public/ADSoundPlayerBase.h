#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ADSoundPlayerBase.generated.h"

class UADSoundInterpFloat;
class UADSoundCategoryParamAccessor;
class UADSoundSourceBase;

UCLASS(Blueprintable)
class UADSoundPlayerBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundSourceBase* SoundSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundCategoryParamAccessor* CategoryParamAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundInterpFloat* DynamicVolumeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundInterpFloat* VolumeFadeParam;
    
public:
    UADSoundPlayerBase();
};

