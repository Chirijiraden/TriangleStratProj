#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActorAssetTable.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorAssetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorBP;
    
    NEWERA_API FActorAssetTable();
};

