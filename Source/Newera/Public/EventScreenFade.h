#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EventScreenFade.generated.h"

UCLASS(Blueprintable)
class AEventScreenFade : public AActor {
    GENERATED_BODY()
public:
    AEventScreenFade();
    UFUNCTION(BlueprintCallable)
    void ScreenFadeOut(float Time, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void ScreenFadeIn(float Time);
    
    UFUNCTION(BlueprintCallable)
    void NowLoadingStartOnNarrationEndForceTransition();
    
    UFUNCTION(BlueprintCallable)
    void NowLoadingStartImmediately();
    
    UFUNCTION(BlueprintCallable)
    void NowLoadingStart(float FadeOutSec);
    
};

