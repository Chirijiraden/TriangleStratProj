#pragma once
#include "CoreMinimal.h"
#include "NeweraMapTimeDependingActor.h"
#include "NeweraMaterialParameterActor.generated.h"

class UCurveBase;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class ANeweraMaterialParameterActor : public ANeweraMapTimeDependingActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveBase*> curveParameterChanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* Collection;
    
public:
    ANeweraMaterialParameterActor();
};

