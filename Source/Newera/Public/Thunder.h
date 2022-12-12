#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Thunder.generated.h"

class UWorld;

UCLASS(Blueprintable)
class NEWERA_API UThunder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldContext;
    
    UThunder();
};

