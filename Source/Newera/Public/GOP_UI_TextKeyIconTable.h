#pragma once
#include "CoreMinimal.h"
#include "EButtonGuideCategory.h"
#include "EButtonGuideActionType.h"
#include "Engine/DataTable.h"
#include "GOP_UI_TextKeyIconTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_UI_TextKeyIconTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonGuideCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonGuideActionType ActionType;
    
    NEWERA_API FGOP_UI_TextKeyIconTable();
};

