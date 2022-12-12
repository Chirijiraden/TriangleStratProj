#pragma once
#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CollideWithTrolleyActorInterface.h"
#include "MapUnitDrawerInterface.h"
#include "MapCharacterControllInterface.h"
#include "NeweraControllInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EffectSocketDatas.h"
#include "NeweraCharacterBase.generated.h"

class USceneComponent;
class UDecalComponent;
class UActorListComponent;
class AInOutDoorManager;
class UInterpFloat;
class UNeweraActionComponent;
class UNeweraCharacterModifierComponent;
class ANeweraCharacterBase;
class UNeweraBillboardComponent;
class UNeweraFlipbookNotifyComponent;
class UNeweraJumpMoveComponent;
class UNeweraGridMoveComponent;
class UNeweraSpriteManagerComponent;
class UStaticMeshComponent;
class UCurveFloat;
class UMaterialParameterCollection;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class NEWERA_API ANeweraCharacterBase : public APaperCharacter, public ICollideWithTrolleyActorInterface, public INeweraControllInterface, public IMapCharacterControllInterface, public IMapUnitDrawerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* characterDirection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraActionComponent* actionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorListComponent* ActorListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraGridMoveComponent* gridMoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraJumpMoveComponent* jumpMoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraSpriteManagerComponent* spriteManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraFlipbookNotifyComponent* flipbookNotifyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraCharacterModifierComponent* characterModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* secondRotationScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CircleShadowPositionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponentCircleShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponentCircleShadowHorse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEffectSocketDatas> EffectBaseOffsetsEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> effectForwardVectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> gridOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint PixelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* circleShadowMaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* circleShadowHorseMaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* circleShadowOpacityByCameraAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInOutDoorManager* InOutDoorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* interpOpacity;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* rimRightCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fresnel_Exp_Friendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Fresnel_Color_Friendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fresnel_Exp_Guest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Fresnel_Color_Guest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fresnel_Exp_Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Fresnel_Color_Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fresnel_Exp_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Fresnel_Color_Enemy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpRotationT;
    
public:
    ANeweraCharacterBase();
    UFUNCTION(BlueprintCallable)
    void StartRotationYawBP(const FRotator& TargetRotator, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    void SetRimRightParam(float fExp, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHpZeroBP(ANeweraCharacterBase* attacker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGeneratedByGeneratePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNeweraActionComponent* GetActionComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisibility(bool Enable);
    
    
    // Fix for true pure virtual functions not being implemented
};

