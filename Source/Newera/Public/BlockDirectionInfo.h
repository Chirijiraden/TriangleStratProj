#pragma once
#include "CoreMinimal.h"
#include "BlockDirType.h"
#include "UObject/NoExportTypes.h"
#include "BlockDirectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FBlockDirectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector GridPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<BlockDirType> BlockDirections;
    
    NEWERA_API FBlockDirectionInfo();
};

