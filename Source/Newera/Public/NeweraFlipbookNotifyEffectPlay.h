#pragma once
#include "CoreMinimal.h"
#include "NeweraFlipbookNotifyBase.h"
#include "ENeweraNotifyIndexEffect.h"
#include "NeweraFlipbookNotifyEffectPlay.generated.h"

UCLASS(Blueprintable)
class UNeweraFlipbookNotifyEffectPlay : public UNeweraFlipbookNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraNotifyIndexEffect NotifyIndex;
    
public:
    UNeweraFlipbookNotifyEffectPlay();
};

