#pragma once
#include "CoreMinimal.h"
#include "WorldMapNarrationTextData.generated.h"

USTRUCT(BlueprintType)
struct FWorldMapNarrationTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTimeSec;
    
    NEWERA_API FWorldMapNarrationTextData();
};

