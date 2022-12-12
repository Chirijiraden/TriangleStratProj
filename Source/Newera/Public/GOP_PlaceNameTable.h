#pragma once
#include "CoreMinimal.h"
#include "EEmblemType.h"
#include "Engine/DataTable.h"
#include "GOP_PlaceNameTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_PlaceNameTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CountryNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TerritoryNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaceNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmblemType EEmblemType;
    
    NEWERA_API FGOP_PlaceNameTable();
};

