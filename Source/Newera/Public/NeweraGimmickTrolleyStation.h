#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionObjectInterface.h"
#include "NeweraGimmickTrolleyStation.generated.h"

class ANeweraGimmickTrolleyActorGhost;
class ANeweraGimmickTrolleyActor;

UCLASS(Blueprintable)
class ANeweraGimmickTrolleyStation : public AActor, public IActionObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraGimmickTrolleyActor* TrolleyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraGimmickTrolleyActorGhost* TrolleyActorGhost;
    
public:
    ANeweraGimmickTrolleyStation();
    
    // Fix for true pure virtual functions not being implemented
};

