#pragma once
#include "CoreMinimal.h"
#include "CellInfoMeshArray.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FCellInfoMeshArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> Meshs;
    
    NEWERA_API FCellInfoMeshArray();
};

