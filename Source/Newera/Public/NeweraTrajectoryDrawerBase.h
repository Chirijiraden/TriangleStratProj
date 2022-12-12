#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrajectoryTypeData.h"
#include "NeweraTrajectoryDrawerBase.generated.h"

class UParticleSystem;
class UBattle_Orbit_Block;
class UInterpFloat;
class UTrajectoryEffectParabola;

UCLASS(Blueprintable)
class UNeweraTrajectoryDrawerBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* EmitterTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTrajectoryEffectParabola*> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* TimerCreateEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Orbit_Block* WidgetOrbitBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTrajectoryTypeData TrajectoryTypeData;
    
public:
    UNeweraTrajectoryDrawerBase();
};

