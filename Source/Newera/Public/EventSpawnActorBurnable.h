#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "ESpawnPlaceType.h"
#include "EventSpawnActorBurnable.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventSpawnActorBurnable : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPlaceType SpawnPlaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool PauseSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString JumpLabelName;
    
    AEventSpawnActorBurnable();
    UFUNCTION(BlueprintCallable)
    void SetSpawnPlaceType(ESpawnPlaceType NewSpawnPlaceType);
    
};

