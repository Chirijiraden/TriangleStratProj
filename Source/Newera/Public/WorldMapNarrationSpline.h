#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "WorldMapNarrationSpline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class AWorldMapNarrationSpline : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SplineEndTransform;
    
    AWorldMapNarrationSpline();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USplineComponent* GetSplineComponent() const;
    
};

