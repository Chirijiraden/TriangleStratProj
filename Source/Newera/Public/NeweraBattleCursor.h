#pragma once
#include "CoreMinimal.h"
#include "BattleFlowStateReceiverInterface.h"
#include "NeweraCursorBase.h"
#include "NeweraBattleCursor.generated.h"

class UBattleCursorStateReceiverInterface;
class IBattleCursorStateReceiverInterface;
class ANeweraActiveUnitPanelActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class NEWERA_API ANeweraBattleCursor : public ANeweraCursorBase, public IBattleFlowStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* dirCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* dirSlideCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IBattleCursorStateReceiverInterface>> StateReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraActiveUnitPanelActor* activeUnitPanelActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraActiveUnitPanelActor> activeUnitPanelActorBP;
    
    ANeweraBattleCursor();
    
    // Fix for true pure virtual functions not being implemented
};

