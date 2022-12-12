#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "ETrajectoryParticleType.h"
#include "TrajectoryTypeData.h"
#include "NeweraDataAssetBattle.generated.h"

class UBattle_Orbit_Block;
class ANeweraGimmickTrolleyActorGhost;
class UNeweraTrajectoryDrawerParabola;
class UNeweraTrajectoryDrawerLine;

UCLASS(Blueprintable)
class UNeweraDataAssetBattle : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellInfoRefreshBufferSecMovableDangerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GimmickTrolleyCommandGopIdSend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GimmickTrolleyCommandGopIdCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionObjectMenuValidHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraGimmickTrolleyActorGhost> GimmickTrolleyGhostClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrajectoryDangerLineInflectionPointHeightFromUpperLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrajectoryDangerLineInflectionPointHeightFromUpperLocationSubPerHeightGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TrajectoryParabolaRangeAdditionalHeightGapThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNeweraTrajectoryDrawerLine> TrajectoryDrawerLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNeweraTrajectoryDrawerParabola> TrajectoryDrawerParabolaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Orbit_Block> TrajectoryWidgetOrbitBlockClass;
    
    UPROPERTY(EditAnywhere)
    TMap<ETrajectoryParticleType, FTrajectoryTypeData> TrajectoryTypeDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMoveSpeedPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMoveSpeedPerSecZipLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrolleyHitKnockbackHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrolleyHitKnockbackSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrolleyHitKnockbackCurveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrolleyMoveDamageRateByMaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrolleyMoveDamageGopIdEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrolleyMoveDamageGopIdSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemptationUnitEvaluationHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemptationAttackRemoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrolleyMoveEventTriggerTRate;
    
public:
    UNeweraDataAssetBattle();
};

