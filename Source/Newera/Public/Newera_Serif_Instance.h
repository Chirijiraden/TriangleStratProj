#pragma once
#include "CoreMinimal.h"
#include "Newera_Serif_Instance.generated.h"

class UCommon_Serif_Baloon;

USTRUCT(BlueprintType)
struct FNewera_Serif_Instance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Serif_Baloon* widgetSerifCommon;
    
    NEWERA_API FNewera_Serif_Instance();
};

