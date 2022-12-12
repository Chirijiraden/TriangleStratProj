#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EJumpLabelCondition.h"
#include "EventJumpLabel.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventJumpLabel : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpLabelCondition jumpCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString JumpLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpLabelCondition jumpCondition2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString jumpLabelName2;
    
    AEventJumpLabel();
    UFUNCTION(BlueprintCallable)
    void SetJumpCondition2(EJumpLabelCondition condition);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpCondition(EJumpLabelCondition condition);
    
};

