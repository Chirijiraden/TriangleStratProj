#pragma once
#include "CoreMinimal.h"
#include "ENeweraFlipbookOverrideType.h"
#include "Engine/DataTable.h"
#include "GOP_Character_PictureTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_Character_PictureTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnitMasterRecId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraFlipbookOverrideType ENeweraFlipbookOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharaPictName;
    
    NEWERA_API FGOP_Character_PictureTable();
};

