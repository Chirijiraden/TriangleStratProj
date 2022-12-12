#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoModeStateReceiverInterface.h"
#include "WorldMapNarrationTextData.h"
#include "EventWorldMapNarrationText.generated.h"

class UInterpFloat;

UCLASS(Blueprintable)
class AEventWorldMapNarrationText : public AActor, public IAutoModeStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* TimerPlayVoice;
    
public:
    AEventWorldMapNarrationText();
    UFUNCTION(BlueprintCallable)
    void StartWithAutoFlipSingle(FName GopId, float DispTimeSec);
    
    UFUNCTION(BlueprintCallable)
    void StartWithAutoFlip(const TArray<FWorldMapNarrationTextData>& Datas);
    
    UFUNCTION(BlueprintCallable)
    void Start(const TArray<FName>& GopIds);
    
    UFUNCTION(BlueprintCallable)
    void Next();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    
    // Fix for true pure virtual functions not being implemented
};

