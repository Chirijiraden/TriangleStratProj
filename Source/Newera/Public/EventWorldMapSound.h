#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventWorldMapSound.generated.h"

UCLASS(Blueprintable)
class AEventWorldMapSound : public AActor {
    GENERATED_BODY()
public:
    AEventWorldMapSound();
    UFUNCTION(BlueprintCallable)
    void TransitionVolumeRateBGM(float TargetRate, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    void StopLoopSound();
    
    UFUNCTION(BlueprintCallable)
    void PlaySe(FName GopId);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutLoopSound(float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutBGM(float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    void FadeInBGM(float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBGM(FName GopId, float FadeInSec, float OldBgmFadeOutSec, float DelaySec);
    
};

