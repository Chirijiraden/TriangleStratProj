#pragma once
#include "CoreMinimal.h"
#include "MapGridObjectSpawnInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMapGridObjectSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    NEWERA_API FMapGridObjectSpawnInfo();
};

