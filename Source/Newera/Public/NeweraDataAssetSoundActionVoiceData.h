#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetSoundActionVoiceDataNest.h"
#include "NeweraDataAssetSoundActionVoiceData.generated.h"

USTRUCT(BlueprintType)
struct FNeweraDataAssetSoundActionVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNeweraDataAssetSoundActionVoiceDataNest> Datas;
    
    NEWERA_API FNeweraDataAssetSoundActionVoiceData();
};

