#pragma once
#include "CoreMinimal.h"
#include "BuildingMaterials.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FBuildingMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
    NEWERA_API FBuildingMaterials();
};

