#pragma once
#include "CoreMinimal.h"
#include "NeweraCursorBase.h"
#include "NeweraSetupCursor.generated.h"

class ANeweraActiveUnitPanelActor;

UCLASS(Blueprintable)
class NEWERA_API ANeweraSetupCursor : public ANeweraCursorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraActiveUnitPanelActor* activeUnitPanelActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraActiveUnitPanelActor> activeUnitPanelActorBP;
    
    ANeweraSetupCursor();
};

