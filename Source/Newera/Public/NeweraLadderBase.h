#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGridObjectInterface.h"
#include "NeweraLadderBase.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraLadderBase : public AActor, public IMapGridObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bpBridgeIsDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bpBridgeLadderHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bpIsLoadedSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bpBridgeIsGetted;
    
    ANeweraLadderBase();
    
    // Fix for true pure virtual functions not being implemented
};

