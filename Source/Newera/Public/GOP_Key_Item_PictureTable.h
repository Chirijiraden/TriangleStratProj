#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GOP_Key_Item_PictureTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_Key_Item_PictureTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PictuerName;
    
    NEWERA_API FGOP_Key_Item_PictureTable();
};

