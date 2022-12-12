#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NeweraControllInterface.h"
#include "EBattleCursorPanelEffectType.h"
#include "NBattleCursorPanelEffectMaterialArray.h"
#include "NeweraCursorBase.generated.h"

class ANeweraMouseMapCursor;
class UStaticMeshComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class NEWERA_API ANeweraCursorBase : public ACharacter, public INeweraControllInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* floatCursorMoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float panelCursorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float floatCursorBaseZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float panelCursorBaseZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cursorStickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBattleCursorPanelEffectType, FNBattleCursorPanelEffectMaterialArray> CursorPanelEffectMaterials;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* floatCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* panelCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CurrentVisibleCursors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraMouseMapCursor* mapMouseCursor;
    
public:
    ANeweraCursorBase();
    
    // Fix for true pure virtual functions not being implemented
};

