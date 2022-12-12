#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventFinishSpawn.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventFinishSpawn : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString spawnActorTag;
    
    AEventFinishSpawn();
};

