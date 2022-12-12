#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BurnableInterface.h"
#include "BurnableBase.generated.h"

class UActorListComponent;

UCLASS(Blueprintable)
class NEWERA_API ABurnableBase : public AActor, public IBurnableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBurnedResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNotAlreadyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnObjectName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorListComponent* ActorListComponent;
    
public:
    ABurnableBase();
    
    // Fix for true pure virtual functions not being implemented
};

