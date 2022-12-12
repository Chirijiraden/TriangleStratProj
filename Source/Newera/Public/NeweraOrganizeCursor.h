#pragma once
#include "CoreMinimal.h"
#include "NeweraCursorBase.h"
#include "NeweraOrganizeCursor.generated.h"

class ANeweraActiveUnitPanelActor;

UCLASS(Blueprintable)
class NEWERA_API ANeweraOrganizeCursor : public ANeweraCursorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraActiveUnitPanelActor* activeUnitPanelActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraActiveUnitPanelActor> activeUnitPanelActorBP;
    
    ANeweraOrganizeCursor();
};

