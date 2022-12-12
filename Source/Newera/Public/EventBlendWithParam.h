#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "Camera/PlayerCameraManager.h"
#include "EventBlendWithParam.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventBlendWithParam : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float blendInExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bLockInOutgoing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> blendInFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float blendOutExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bLockOutOutgoing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> blendOutFunction;
    
    AEventBlendWithParam();
    UFUNCTION(BlueprintCallable)
    void SetBlendOutFunction(TEnumAsByte<EViewTargetBlendFunction> BlendFunction);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendInFunction(TEnumAsByte<EViewTargetBlendFunction> BlendFunction);
    
};

