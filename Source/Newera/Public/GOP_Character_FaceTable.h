#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GOP_Character_FaceTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_Character_FaceTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FaceDataNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharaPictBaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaskSuffix;
    
    NEWERA_API FGOP_Character_FaceTable();
};

