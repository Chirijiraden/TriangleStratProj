#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SequenceSpawnActorInterface.generated.h"

UINTERFACE(Blueprintable)
class USequenceSpawnActorInterface : public UInterface {
    GENERATED_BODY()
};

class ISequenceSpawnActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnedBySequencer(const FIntVector& Center, const FIntVector& Current, const TArray<FIntVector>& EffectPositions, bool lastSpawn);
    
};

