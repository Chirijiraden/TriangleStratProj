#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GOP_ParamTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_ParamTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iIndex;
    
    NEWERA_API FGOP_ParamTable();
};

