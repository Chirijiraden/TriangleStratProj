#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GOP_Text_NoteTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_Text_NoteTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    NEWERA_API FGOP_Text_NoteTable();
};

