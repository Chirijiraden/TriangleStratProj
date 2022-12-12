#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventNotifyActionObject.generated.h"

UCLASS(Blueprintable)
class AEventNotifyActionObject : public AActor {
    GENERATED_BODY()
public:
    AEventNotifyActionObject();
    UFUNCTION(BlueprintCallable)
    void StartActionNoArg(const FName& TargetTag);
    
    UFUNCTION(BlueprintCallable)
    void StartAction(const FName& TargetTag, const FName& arg1);
    
};

