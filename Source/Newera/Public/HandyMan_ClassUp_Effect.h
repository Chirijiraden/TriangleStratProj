#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "HandyMan_ClassUp_Effect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UHandyMan_ClassUp_Effect : public UCommonBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimerForClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitingClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeRateBGMInEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float durationSecForVolumeRateBGMInEffect;
    
public:
    UHandyMan_ClassUp_Effect();
    UFUNCTION(BlueprintCallable)
    void SetNotifyPlayVoice(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishAttackAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAttackAnim();
    
};

