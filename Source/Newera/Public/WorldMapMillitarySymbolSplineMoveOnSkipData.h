#pragma once
#include "CoreMinimal.h"
#include "WorldMapMillitarySymbolSplineMoveOnSkipData.generated.h"

USTRUCT(BlueprintType)
struct FWorldMapMillitarySymbolSplineMoveOnSkipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSplineTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DivisionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalDistance;
    
    NEWERA_API FWorldMapMillitarySymbolSplineMoveOnSkipData();
};

