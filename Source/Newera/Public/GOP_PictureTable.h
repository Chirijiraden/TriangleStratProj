#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GOP_PictureTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_PictureTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    NEWERA_API FGOP_PictureTable();
};

