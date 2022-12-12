#pragma once
#include "CoreMinimal.h"
#include "WorldMapNarrationMillitarySymbolTypeData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FWorldMapNarrationMillitarySymbolTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialPath;
    
    NEWERA_API FWorldMapNarrationMillitarySymbolTypeData();
};

