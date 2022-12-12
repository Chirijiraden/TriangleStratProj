#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "EActionVoiceType.h"
#include "NeweraDataAssetSoundActionVoiceData2.h"
#include "NeweraActionVoiceData.generated.h"

UCLASS(Blueprintable)
class UNeweraActionVoiceData : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EActionVoiceType, FNeweraDataAssetSoundActionVoiceData2> ActionVoiceDatas;
    
public:
    UNeweraActionVoiceData();
};

