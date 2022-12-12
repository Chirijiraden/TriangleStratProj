#pragma once
#include "CoreMinimal.h"
#include "ActiveUnitPanelMaterialArray.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FActiveUnitPanelMaterialArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    NEWERA_API FActiveUnitPanelMaterialArray();
};

