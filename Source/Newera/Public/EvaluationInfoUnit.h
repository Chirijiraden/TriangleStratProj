#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EvaluationInfoInterface.h"
#include "EvaluationInfoUnit.generated.h"

UCLASS(Blueprintable)
class UEvaluationInfoUnit : public UObject, public IEvaluationInfoInterface {
    GENERATED_BODY()
public:
    UEvaluationInfoUnit();
    
    // Fix for true pure virtual functions not being implemented
};

