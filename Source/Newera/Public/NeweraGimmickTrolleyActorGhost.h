#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraGimmickTrolleyActorGhost.generated.h"

class UInterpFloat;

UCLASS(Blueprintable)
class ANeweraGimmickTrolleyActorGhost : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpOpacityT;
    
public:
    ANeweraGimmickTrolleyActorGhost();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedInterpOpacityT(float CurrentT);
    
};

