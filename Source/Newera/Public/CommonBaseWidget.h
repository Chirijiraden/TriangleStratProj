#pragma once
#include "CoreMinimal.h"
#include "NeweraUIWidget.h"
#include "Blueprint/UserWidget.h"
#include "ComonBaseAnimInfo.h"
#include "CommonBaseWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommonBaseWidget : public UNeweraUIWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidget*> ChildWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FComonBaseAnimInfo> AnimationList;
    
public:
    UCommonBaseWidget();
    UFUNCTION(BlueprintCallable)
    bool StopAnim(FName InAnimationName);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimR(FName InAnimationName, bool bSamePrefixExclusion, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimInWidgetGroupByIndexOther(const FString& InWidgetGroupNameFormat, int32 Index, FName InAnimationName, bool bSamePrefixExclusion, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimInWidgetGroupByIndex(const FString& InWidgetGroupNameFormat, int32 Index, FName InAnimationName, bool bSamePrefixExclusion, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimFinalFrame(FName InName);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnim(FName InAnimationName, bool bSamePrefixExclusion, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool RestoreState);
    
    UFUNCTION(BlueprintCallable)
    bool PauseAnim(FName InAnimationName);
    
};

