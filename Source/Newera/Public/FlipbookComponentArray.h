#pragma once
#include "CoreMinimal.h"
#include "FlipbookComponentArray.generated.h"

class UNeweraPaperFlipbookComponent;

USTRUCT(BlueprintType)
struct FFlipbookComponentArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNeweraPaperFlipbookComponent*> FlipbookComponents;
    
    NEWERA_API FFlipbookComponentArray();
};

