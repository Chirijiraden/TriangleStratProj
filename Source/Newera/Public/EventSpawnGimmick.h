#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "ESpawnPlaceType.h"
#include "EventSpawnGimmick.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventSpawnGimmick : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPlaceType SpawnPlaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString gimmickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString gimmickParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsInheritanceActorLevel;
    
    AEventSpawnGimmick();
    UFUNCTION(BlueprintCallable)
    void SetSpawnPlaceType(ESpawnPlaceType _spawnPlaceType);
    
};

