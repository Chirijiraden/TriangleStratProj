#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LadderManager.generated.h"

class ULadderDataBase;
class UWorld;

UCLASS(Blueprintable)
class NEWERA_API ULadderManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULadderDataBase*> ladderType1Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULadderDataBase*> ladderType2Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULadderDataBase*> removeOldestLadderArray;
    
public:
    ULadderManager();
};

