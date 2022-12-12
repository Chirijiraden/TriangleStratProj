#pragma once
#include "CoreMinimal.h"
#include "NBattleCursorPanelEffectMaterialArray.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNBattleCursorPanelEffectMaterialArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialCaches;
    
    NEWERA_API FNBattleCursorPanelEffectMaterialArray();
};

