#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraProjectileActor.generated.h"

class UActorListComponent;

UCLASS(Blueprintable)
class NEWERA_API ANeweraProjectileActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Launch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool persistentFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorListComponent* ActorListComponent;
    
public:
    ANeweraProjectileActor();
};

