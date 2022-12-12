#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NeweraAmbientActorManager.generated.h"

class ANeweraAmbientActor;

UCLASS(Blueprintable)
class UNeweraAmbientActorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANeweraAmbientActor*> AmbientActors;
    
public:
    UNeweraAmbientActorManager();
};

