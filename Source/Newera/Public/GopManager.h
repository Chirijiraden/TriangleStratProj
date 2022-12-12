#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GopManager.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Game)
class NEWERA_API UGopManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GopPrefixName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> dataDataTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> textDataTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> scenarioTextDataTableArray;
    
public:
    UGopManager();
};

