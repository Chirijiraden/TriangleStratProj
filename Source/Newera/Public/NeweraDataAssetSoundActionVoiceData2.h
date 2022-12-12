#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetSoundActionVoiceData.h"
#include "NeweraDataAssetSoundActionVoiceData2.generated.h"

USTRUCT(BlueprintType)
struct FNeweraDataAssetSoundActionVoiceData2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNeweraDataAssetSoundActionVoiceData> Datas;
    
    NEWERA_API FNeweraDataAssetSoundActionVoiceData2();
};

