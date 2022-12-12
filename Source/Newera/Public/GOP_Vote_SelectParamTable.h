#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GOP_Vote_SelectParamTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_Vote_SelectParamTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectQuote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PValSelect1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PValSelect2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PValSelect3;
    
    NEWERA_API FGOP_Vote_SelectParamTable();
};

