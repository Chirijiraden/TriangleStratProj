#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuResource.generated.h"

class UDebugMenuItem;

UCLASS(Blueprintable)
class NEWERA_API UDebugMenuResource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDebugMenuItem*> menuItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UDebugMenuResource();
};

