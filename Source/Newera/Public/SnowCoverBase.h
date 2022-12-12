#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnowCoverInterface.h"
#include "SnowCoverBase.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ASnowCoverBase : public AActor, public ISnowCoverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToMelt;
    
    ASnowCoverBase();
    
    // Fix for true pure virtual functions not being implemented
};

