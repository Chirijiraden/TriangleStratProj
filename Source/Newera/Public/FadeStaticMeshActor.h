#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "FadeStaticMeshActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class NEWERA_API AFadeStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* fadeOwner;
    
public:
    AFadeStaticMeshActor();
};

