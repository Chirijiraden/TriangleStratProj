#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraGimmickTrolleyActor.generated.h"

class USceneComponent;
class UCollideWithTrolleyActorInterface;
class ICollideWithTrolleyActorInterface;
class UInterpFloat;
class ANeweraCharacterBase;

UCLASS(Blueprintable)
class ANeweraGimmickTrolleyActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpLocationT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANeweraCharacterBase*> NeweraCharactersFriendlyOnRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ICollideWithTrolleyActorInterface>> HiddenObjectsInTrolleyMoving;
    
public:
    ANeweraGimmickTrolleyActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnimation(bool bForwardMove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetDefaultAttachComponent_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableCollision();
    
};

