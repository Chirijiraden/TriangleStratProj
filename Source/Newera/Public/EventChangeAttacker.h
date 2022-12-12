#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EAttackSequence.h"
#include "EventChangeAttacker.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventChangeAttacker : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackSequence changeAttacker;
    
    AEventChangeAttacker();
    UFUNCTION(BlueprintCallable)
    void SetChangeAttacker(EAttackSequence _changeAttacker);
    
};

