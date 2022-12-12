#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CurveAssetTable.generated.h"

class UCurveBase;

USTRUCT(BlueprintType)
struct FCurveAssetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveBase> CurveAsset;
    
    NEWERA_API FCurveAssetTable();
};

