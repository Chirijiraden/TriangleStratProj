#pragma once
#include "CoreMinimal.h"
#include "EEmblemType.h"
#include "Engine/DataTable.h"
#include "GOP_Unit_Attached_DataTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_Unit_Attached_DataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileRecId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmblemType EmblemType;
    
    NEWERA_API FGOP_Unit_Attached_DataTable();
};

