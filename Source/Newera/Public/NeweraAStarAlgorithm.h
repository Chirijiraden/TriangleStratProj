#pragma once
#include "CoreMinimal.h"
#include "AStarAlgorithm.h"
#include "NeweraRouteSearchOptionAccessInterface.h"
#include "NeweraAStarAlgorithm.generated.h"

UCLASS(Blueprintable)
class UNeweraAStarAlgorithm : public UAStarAlgorithm, public INeweraRouteSearchOptionAccessInterface {
    GENERATED_BODY()
public:
    UNeweraAStarAlgorithm();
    
    // Fix for true pure virtual functions not being implemented
};

