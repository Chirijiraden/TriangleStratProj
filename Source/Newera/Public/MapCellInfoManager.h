#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattleFlowStateReceiverInterface.h"
#include "BattleCursorStateReceiverInterface.h"
#include "ECellInfoMeshType.h"
#include "UObject/NoExportTypes.h"
#include "LandEffectData.h"
#include "MapCellInfoManager.generated.h"

class AStaticMeshActor;
class UInterpFloat;
class UMapGridObjectInterface;
class IMapGridObjectInterface;
class UMapCellInfoManager;
class UMapCellInfo;
class ANeweraCharacterBase;
class UNeweraTrajectoryDrawerParabola;
class UNeweraTrajectoryDrawerLine;
class UNeweraTrajectoryDrawerBase;
class UStaticMesh;

UCLASS(Blueprintable)
class NEWERA_API UMapCellInfoManager : public UObject, public IBattleFlowStateReceiverInterface, public IBattleCursorStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, UMapCellInfo*> CellInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraTrajectoryDrawerBase* CurrentTrajectoryDrawer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IMapGridObjectInterface>> MapGridObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNeweraTrajectoryDrawerParabola*> DangerAreaTargettingTrajectoryDrawers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* TimerForceRefreshDangerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FLandEffectData> LandEffectDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraCharacterBase* GhostCharacter;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<ECellInfoMeshType, UStaticMesh*> CellInfoMeshCaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraTrajectoryDrawerLine* PoolTrajectoryDrawerLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNeweraTrajectoryDrawerParabola*> PoolTrajectoryDrawerParabolas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> PoolPanelMesh;
    
public:
    UMapCellInfoManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMapCellInfoManager* GetInstance();
    
    
    // Fix for true pure virtual functions not being implemented
};

