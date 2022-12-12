#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AnimationAssetTable.generated.h"

class UNeweraAnimationData;

USTRUCT(BlueprintType)
struct FAnimationAssetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNeweraAnimationData> AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    NEWERA_API FAnimationAssetTable();
};

