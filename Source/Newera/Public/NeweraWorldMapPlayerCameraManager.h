#pragma once
#include "CoreMinimal.h"
#include "NeweraPlayerCameraManager.h"
#include "NeweraControllInterface.h"
#include "NeweraCameraModeReceiverInterface.h"
#include "WorldMapOrderedInitializationInterface.h"
#include "WorldMapFlowStateReceiverInterface.h"
#include "NeweraWorldMapPlayerCameraManager.generated.h"

class UInterpFloat;
class AWorldMapCameraTarget;
class UCurveFloat;
class UMaterialParameterCollection;

UCLASS(Blueprintable, NonTransient)
class NEWERA_API ANeweraWorldMapPlayerCameraManager : public ANeweraPlayerCameraManager, public INeweraCameraModeReceiverInterface, public INeweraControllInterface, public IWorldMapFlowStateReceiverInterface, public IWorldMapOrderedInitializationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapCameraTarget* CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PostProcessMPCRadialBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpEventDecisionSequenceT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpEventDecisionSequenceCurveFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpCurveBlurPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpCurveBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpCurveBlurRadiusExponent;
    
public:
    ANeweraWorldMapPlayerCameraManager();
    
    // Fix for true pure virtual functions not being implemented
};

