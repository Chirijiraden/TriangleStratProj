#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "DebugCellMan.generated.h"

class ADebugCellStaticMeshActor;

UCLASS(Blueprintable)
class NEWERA_API ADebugCellMan : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cellGridOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADebugCellStaticMeshActor> debugCellMesh;
    
public:
    ADebugCellMan();
    UFUNCTION(BlueprintCallable)
    void SetDebugCellValidation(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDebugCell() const;
    
};

