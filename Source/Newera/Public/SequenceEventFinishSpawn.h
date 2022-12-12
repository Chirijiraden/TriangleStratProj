#pragma once
#include "CoreMinimal.h"
#include "SequenceEventFinishSpawn.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventFinishSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName finishSpawnActorTagName;
    
    NEWERA_API FSequenceEventFinishSpawn();
};

