#pragma once
#include "CoreMinimal.h"
#include "NeweraUIWidget.h"
#include "WorldMapWidgetBase.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UWorldMapWidgetBase : public UNeweraUIWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidgetAnimation*> Animations;
    
public:
    UWorldMapWidgetBase();
private:
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationVisible();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

