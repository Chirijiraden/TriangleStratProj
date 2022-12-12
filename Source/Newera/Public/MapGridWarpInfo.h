#pragma once
#include "CoreMinimal.h"
#include "EMapGridWarpType.h"
#include "ECellInfoMovableUpdateType.h"
#include "UObject/NoExportTypes.h"
#include "MapGridWarpInfo.generated.h"

USTRUCT(BlueprintType)
struct FMapGridWarpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapGridWarpType MapGridWarpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Position;
    
    UPROPERTY(EditAnywhere)
    uint32 cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> objectTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> CheckPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECellInfoMovableUpdateType CellInfoMovableUpdateType;
    
    NEWERA_API FMapGridWarpInfo();
};

