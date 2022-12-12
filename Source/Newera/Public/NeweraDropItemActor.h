#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollideWithTrolleyActorInterface.h"
#include "NeweraDropItemActor.generated.h"

UCLASS(Blueprintable)
class ANeweraDropItemActor : public AActor, public ICollideWithTrolleyActorInterface {
    GENERATED_BODY()
public:
    ANeweraDropItemActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnhideBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBP();
    
    
    // Fix for true pure virtual functions not being implemented
};

