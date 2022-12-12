#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEventWorldMapFullScreenWidgetSlot.h"
#include "EventWorldMapFullScreenWidget.generated.h"

class UWorldMapWidgetNarrationFullScreen;

UCLASS(Blueprintable)
class AEventWorldMapFullScreenWidget : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<EEventWorldMapFullScreenWidgetSlot, UWorldMapWidgetNarrationFullScreen*> CurrentWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldMapWidgetNarrationFullScreen*> LoadedWidgets;
    
public:
    AEventWorldMapFullScreenWidget();
    UFUNCTION(BlueprintCallable)
    void PlayAnimationByName(EEventWorldMapFullScreenWidgetSlot EventWorldMapFullScreenWidgetSlot, FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void Out(EEventWorldMapFullScreenWidgetSlot EventWorldMapFullScreenWidgetSlot);
    
    UFUNCTION(BlueprintCallable)
    void Load(TSoftClassPtr<UWorldMapWidgetNarrationFullScreen> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void InOut(TSoftClassPtr<UWorldMapWidgetNarrationFullScreen> WidgetClass, EEventWorldMapFullScreenWidgetSlot EventWorldMapFullScreenWidgetSlot);
    
    UFUNCTION(BlueprintCallable)
    void In(TSoftClassPtr<UWorldMapWidgetNarrationFullScreen> WidgetClass, EEventWorldMapFullScreenWidgetSlot EventWorldMapFullScreenWidgetSlot);
    
    UFUNCTION(BlueprintCallable)
    void Create(TSoftClassPtr<UWorldMapWidgetNarrationFullScreen> WidgetClass, EEventWorldMapFullScreenWidgetSlot EventWorldMapFullScreenWidgetSlot, FName AnimationName);
    
};

