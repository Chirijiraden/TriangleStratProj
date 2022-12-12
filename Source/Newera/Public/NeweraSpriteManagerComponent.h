#pragma once
#include "CoreMinimal.h"
#include "BattleFlowStateReceiverInterface.h"
#include "CharacterComponentBase.h"
#include "FastForwardStateReceiverInterface.h"
#include "NeweraCameraModeReceiverInterface.h"
#include "EFlipbookUseType.h"
#include "EAnimationType.h"
#include "ENeweraFlipbookOverrideType.h"
#include "FlipbookComponentArray.h"
#include "NeweraFlipbookOverrideData.h"
#include "FlipbookCacheKey.h"
#include "NeweraSpriteManagerComponentMimicData.h"
#include "NeweraSpriteManagerComponent.generated.h"

class UPaperFlipbook;
class UInterpFloat;
class UNeweraAnimationData;
class UNeweraPaperFlipbookComponent;
class UCurveFloat;
class UPointLightComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNeweraSpriteManagerComponent : public UCharacterComponentBase, public INeweraCameraModeReceiverInterface, public IBattleFlowStateReceiverInterface, public IFastForwardStateReceiverInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysHorse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpriteReplaceDestString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationType, TSoftObjectPtr<UNeweraAnimationData>> DefaultAnimationDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENeweraFlipbookOverrideType, FNeweraFlipbookOverrideData> FlipbookOverrideDatas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFlipbookUseType, FFlipbookComponentArray> RelativeComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNeweraPaperFlipbookComponent* SpriteRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPointLightComponent* LightForHandLamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpRotT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveFloatOffsetYByCameraAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNeweraSpriteManagerComponentMimicData NeweraSpriteManagerComponentMimicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAnimationType, UNeweraAnimationData*> DefaultAnimationDataCaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UNeweraAnimationData*> AnimationAssetAnimationDataCaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FFlipbookCacheKey, UPaperFlipbook*> FlipbookCaches;
    
public:
    UNeweraSpriteManagerComponent();
private:
    UFUNCTION(BlueprintCallable)
    void onFinishedPlaying();
    
    
    // Fix for true pure virtual functions not being implemented
};

