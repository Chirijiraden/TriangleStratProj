#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MapActionObjectManager.generated.h"

class UWorld;

UCLASS(Blueprintable)
class NEWERA_API UMapActionObjectManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldContext;
    
    UMapActionObjectManager();
};

