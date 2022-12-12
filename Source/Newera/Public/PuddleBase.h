#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuddleInterface.h"
#include "PuddleBase.generated.h"

UCLASS(Blueprintable)
class NEWERA_API APuddleBase : public AActor, public IPuddleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToPuddle;
    
    APuddleBase();
    
    // Fix for true pure virtual functions not being implemented
};

