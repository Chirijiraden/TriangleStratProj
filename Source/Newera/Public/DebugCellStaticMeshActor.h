#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "DebugCellStaticMeshActor.generated.h"

class UStaticMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class NEWERA_API ADebugCellStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* staticMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* dynamicMaterial;
    
public:
    ADebugCellStaticMeshActor();
};

