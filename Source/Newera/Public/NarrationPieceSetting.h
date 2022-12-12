#pragma once
#include "CoreMinimal.h"
#include "NarrationPieceSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNarrationPieceSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> FlagMaterial;
    
    NEWERA_API FNarrationPieceSetting();
};

