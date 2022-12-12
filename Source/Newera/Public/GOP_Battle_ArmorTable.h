#pragma once
#include "CoreMinimal.h"
#include "EArmorType.h"
#include "Engine/DataTable.h"
#include "GOP_Battle_ArmorTable.generated.h"

USTRUCT(BlueprintType)
struct FGOP_Battle_ArmorTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmorHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmorType EArmorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CorrectParam;
    
    NEWERA_API FGOP_Battle_ArmorTable();
};

