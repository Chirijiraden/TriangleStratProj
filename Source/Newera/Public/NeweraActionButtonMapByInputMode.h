#pragma once
#include "CoreMinimal.h"
#include "ENeweraInputMode.h"
#include "NeweraActionButtonMap.h"
#include "NeweraActionButtonMapByInputMode.generated.h"

USTRUCT(BlueprintType)
struct FNeweraActionButtonMapByInputMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENeweraInputMode, FNeweraActionButtonMap> actionButtonMap;
    
    NEWERA_API FNeweraActionButtonMapByInputMode();
};

