#pragma once
#include "CoreMinimal.h"
#include "ETerritoryType.h"
#include "WorldMapTerritoryDrawData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FWorldMapTerritoryDrawData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> TextureLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> TextureArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETerritoryType, ETerritoryType> TerritoryDrawOverrideTypes;
    
    NEWERA_API FWorldMapTerritoryDrawData();
};

