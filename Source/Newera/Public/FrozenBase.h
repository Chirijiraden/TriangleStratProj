#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FrozenInterface.h"
#include "FrozenBase.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AFrozenBase : public AActor, public IFrozenInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToMelt;
    
    AFrozenBase();
    
    // Fix for true pure virtual functions not being implemented
};

