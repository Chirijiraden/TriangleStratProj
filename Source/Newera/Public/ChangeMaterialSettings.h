#pragma once
#include "CoreMinimal.h"
#include "ChangeMaterialSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FChangeMaterialSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialParamNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> MaterialParamCurve;
    
    NEWERA_API FChangeMaterialSettings();
};

