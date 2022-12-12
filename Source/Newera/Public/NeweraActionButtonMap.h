#pragma once
#include "CoreMinimal.h"
#include "ENeweraKeyConfigType.h"
#include "ENeweraInputMode.h"
#include "Engine/DataTable.h"
#include "NeweraActionButtonInfo.h"
#include "NeweraActionButtonMap.generated.h"

USTRUCT(BlueprintType)
struct FNeweraActionButtonMap : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraKeyConfigType configType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraInputMode inputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNeweraActionButtonInfo> buttonInfo;
    
    NEWERA_API FNeweraActionButtonMap();
};

