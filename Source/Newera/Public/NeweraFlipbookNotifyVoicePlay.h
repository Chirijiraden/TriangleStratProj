#pragma once
#include "CoreMinimal.h"
#include "NeweraFlipbookNotifyBase.h"
#include "ENeweraNotifyIndexVoice.h"
#include "NeweraFlipbookNotifyVoicePlay.generated.h"

UCLASS(Blueprintable)
class UNeweraFlipbookNotifyVoicePlay : public UNeweraFlipbookNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraNotifyIndexVoice NotifyIndex;
    
public:
    UNeweraFlipbookNotifyVoicePlay();
};

