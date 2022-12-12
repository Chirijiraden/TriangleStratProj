#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GOP_PlaceNameSetTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_PlaceNameSetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaceNameSet1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaceNameSet2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaceNameSet3;
    
    NEWERA_API FGOP_PlaceNameSetTable();
};

