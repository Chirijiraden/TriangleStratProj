#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBattleCursorPanelEffectType.h"
#include "ActiveUnitPanelMaterialArray.h"
#include "NeweraActiveUnitPanelActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANeweraActiveUnitPanelActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* panelCursor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBattleCursorPanelEffectType, FActiveUnitPanelMaterialArray> CursorPanelEffectMaterials;
    
    ANeweraActiveUnitPanelActor();
};

