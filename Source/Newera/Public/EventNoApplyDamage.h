#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventNoApplyDamage.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventNoApplyDamage : public AEventParamActor {
    GENERATED_BODY()
public:
    AEventNoApplyDamage();
    UFUNCTION(BlueprintCallable)
    void EventTriggerDirect();
    
};

