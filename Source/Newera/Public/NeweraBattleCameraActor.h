#pragma once
#include "CoreMinimal.h"
#include "NeweraCameraActorControllable.h"
#include "CameraActorViewParam.h"
#include "NeweraBattleCameraActor.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraBattleCameraActor : public ANeweraCameraActorControllable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLagSpeedForBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRotationLagSpeedForBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLagMaxDistanceForBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLagSpeedForStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRotationLagSpeedForStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLagMaxDistanceForStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraActorViewParam> CameraActorViewParamsForStandby;
    
    ANeweraBattleCameraActor(const FObjectInitializer& ObjectInitializer);
};

