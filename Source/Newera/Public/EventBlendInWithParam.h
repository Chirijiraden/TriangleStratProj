#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "Camera/PlayerCameraManager.h"
#include "EventBlendInWithParam.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventBlendInWithParam : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float blendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bLockOutgoing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> BlendFunction;
    
    AEventBlendInWithParam();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(TEnumAsByte<EViewTargetBlendFunction> _blendFunction);
    
};

