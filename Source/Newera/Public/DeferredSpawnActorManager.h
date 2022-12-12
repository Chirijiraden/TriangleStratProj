#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DeferredSpawnActorManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class NEWERA_API UDeferredSpawnActorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> deferredSpawningActors;
    
public:
    UDeferredSpawnActorManager();
};

