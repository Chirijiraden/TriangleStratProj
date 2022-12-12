#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ForceFeedbackAssetTable.generated.h"

class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FForceFeedbackAssetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UForceFeedbackEffect> ForceFeedbackAsset;
    
    NEWERA_API FForceFeedbackAssetTable();
};

