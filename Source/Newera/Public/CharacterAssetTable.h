#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterAssetTable.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FCharacterAssetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacter> CharacterBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    NEWERA_API FCharacterAssetTable();
};

