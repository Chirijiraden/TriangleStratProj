#pragma once
#include "CoreMinimal.h"
#include "ESpawnPlaceType.h"
#include "SequenceEventSpawnGimmick.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventSpawnGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPlaceType SpawnPlaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName gimmickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName gimmickParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInheritanceActorLevel;
    
    NEWERA_API FSequenceEventSpawnGimmick();
};

