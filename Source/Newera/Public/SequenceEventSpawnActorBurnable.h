#pragma once
#include "CoreMinimal.h"
#include "ESpawnPlaceType.h"
#include "SequenceEventSpawnActorBurnable.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventSpawnActorBurnable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPlaceType SpawnPlaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PauseSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JumpLabelName;
    
    NEWERA_API FSequenceEventSpawnActorBurnable();
};

