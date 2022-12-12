#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChangeMaterialSettings.h"
#include "CreatedDynamicMaterials.h"
#include "ChangeMaterialMultiMeshesByCameraRotation.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UChangeMaterialMultiMeshesByCameraRotation : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCreatedDynamicMaterials> CreatedDynamicMaterials;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FChangeMaterialSettings> MaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChangeValidateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionThreshold;
    
    UChangeMaterialMultiMeshesByCameraRotation();
};

