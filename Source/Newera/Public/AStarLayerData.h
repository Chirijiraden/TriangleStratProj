#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AStarLayerData.generated.h"

class UAStarCellInfo;

USTRUCT(BlueprintType)
struct FAStarLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, UAStarCellInfo*> CellInfos;
    
    NEWERA_API FAStarLayerData();
};

