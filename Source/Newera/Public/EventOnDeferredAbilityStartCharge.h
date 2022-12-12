#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventOnDeferredAbilityStartCharge.generated.h"

UCLASS(Blueprintable)
class AEventOnDeferredAbilityStartCharge : public AActor {
    GENERATED_BODY()
public:
    AEventOnDeferredAbilityStartCharge();
    UFUNCTION(BlueprintCallable)
    void Exec();
    
};

