#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SeqCameraEffectAsset.h"
#include "EffectAssetMan.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class NEWERA_API UEffectAssetMan : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqCameraEffectAsset> loadedSeqCameraEffectAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> loadedEffectEffectAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> loadedEffectAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> TempFlipbookNotifyEffectObjectPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> loadedFlipbookNotifyEffectAssets;
    
public:
    UEffectAssetMan();
};

