#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraAmbientActor.generated.h"

UCLASS(Blueprintable)
class ANeweraAmbientActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GopIdSe;
    
public:
    ANeweraAmbientActor();
};

