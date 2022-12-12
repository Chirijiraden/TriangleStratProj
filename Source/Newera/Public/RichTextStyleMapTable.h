#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RichTextStyleMapTable.generated.h"

USTRUCT(BlueprintType)
struct FRichTextStyleMapTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StyleEndFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReplaceFlag;
    
    NEWERA_API FRichTextStyleMapTable();
};

