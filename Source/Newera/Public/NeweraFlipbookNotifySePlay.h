#pragma once
#include "CoreMinimal.h"
#include "NeweraFlipbookNotifyBase.h"
#include "ENeweraNotifyIndexSe.h"
#include "NeweraFlipbookNotifySePlay.generated.h"

UCLASS(Blueprintable)
class UNeweraFlipbookNotifySePlay : public UNeweraFlipbookNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraNotifyIndexSe NotifyIndex;
    
public:
    UNeweraFlipbookNotifySePlay();
};

