#pragma once
#include "CoreMinimal.h"
#include "CreatedDynamicMaterials.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FCreatedDynamicMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInstanceDynamic*> materialMap;
    
    NEWERA_API FCreatedDynamicMaterials();
};

