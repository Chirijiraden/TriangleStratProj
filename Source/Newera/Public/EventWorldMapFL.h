#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventWorldMapFL.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class AEventWorldMapFL : public AActor {
    GENERATED_BODY()
public:
    AEventWorldMapFL();
    UFUNCTION(BlueprintCallable)
    static void ShowPicture(UTexture2D* tex, float posx, float posy, float fade_time);
    
    UFUNCTION(BlueprintCallable)
    void OpenTitleTelop();
    
    UFUNCTION(BlueprintCallable)
    static void HidePicture(float fade_time);
    
    UFUNCTION(BlueprintCallable)
    void EnableNarrationSkip();
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoModeToggle();
    
    UFUNCTION(BlueprintCallable)
    void DisableNarrationSkip();
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoModeToggle();
    
    UFUNCTION(BlueprintCallable)
    void CinemaScopeEnable();
    
    UFUNCTION(BlueprintCallable)
    void CinemaScopeDisable();
    
};

