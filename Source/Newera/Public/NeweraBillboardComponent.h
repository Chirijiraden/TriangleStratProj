#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NeweraCameraModeReceiverInterface.h"
#include "NeweraBillboardComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UNeweraBillboardComponent : public USceneComponent, public INeweraCameraModeReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BillboardPitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveScalingByCameraAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveFloatOffsetPowerToScreenCenterByCameraAngle;
    
public:
    UNeweraBillboardComponent();
    
    // Fix for true pure virtual functions not being implemented
};

