#pragma once
#include "CoreMinimal.h"
#include "AbstractParticleModule.h"
#include "UObject/NoExportTypes.h"
#include "Distributions/DistributionVector.h"
#include "ParticleModuleSizeBySpeedOverTime.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleSizeBySpeedOverTime : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinSize;
    
public:
    UParticleModuleSizeBySpeedOverTime();
};

