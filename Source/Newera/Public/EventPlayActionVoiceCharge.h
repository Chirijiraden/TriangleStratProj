#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventPlayActionVoiceCharge.generated.h"

UCLASS(Blueprintable)
class AEventPlayActionVoiceCharge : public AActor {
    GENERATED_BODY()
public:
    AEventPlayActionVoiceCharge();
    UFUNCTION(BlueprintCallable)
    void Exec();
    
};

