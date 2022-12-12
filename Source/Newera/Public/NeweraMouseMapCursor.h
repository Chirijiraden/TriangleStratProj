#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraMouseMapCursor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class NEWERA_API ANeweraMouseMapCursor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* panelMeshComp;
    
public:
    ANeweraMouseMapCursor();
};

