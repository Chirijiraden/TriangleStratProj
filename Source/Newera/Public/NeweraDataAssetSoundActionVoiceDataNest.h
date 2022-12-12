#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetSoundActionVoiceDataNest.generated.h"

USTRUCT(BlueprintType)
struct FNeweraDataAssetSoundActionVoiceDataNest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightPerMil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundVoiceGopId;
    
    NEWERA_API FNeweraDataAssetSoundActionVoiceDataNest();
};

