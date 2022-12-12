#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NeweraControllInterface.h"
#include "WorldMapManager.generated.h"

class AActor;
class UTickableObjectInterface;
class ITickableObjectInterface;
class UWorldMapResumableObjectInterface;
class IWorldMapResumableObjectInterface;
class UWorldMapOrderedInitializationInterface;
class IWorldMapOrderedInitializationInterface;
class AWorldMapNarrationSequenceManager;
class UWorldMapHitCheckManager;
class UWorldMapFlowStateReceiverInterface;
class IWorldMapFlowStateReceiverInterface;
class AWorldMapEventPlaceActor;
class UWorldMapEventMarkInterface;
class IWorldMapEventMarkInterface;
class AWorldMapCursorActor;
class UWorldMapWidgetManager;

UCLASS(Blueprintable)
class NEWERA_API UWorldMapManager : public UObject, public INeweraControllInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetManager* WidgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapHitCheckManager* HitCheckManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapNarrationSequenceManager* NarrationSequenceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapCursorActor* CursorActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ITickableObjectInterface>> TickableObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IWorldMapFlowStateReceiverInterface>> StateReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IWorldMapOrderedInitializationInterface>> ReservedInitializeObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IWorldMapResumableObjectInterface>> ReservedResumeObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IWorldMapResumableObjectInterface>> ResumedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> PlacedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWorldMapEventPlaceActor*> EventPlaceActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IWorldMapEventMarkInterface> CurrentControlledEventMark;
    
public:
    UWorldMapManager();
    
    // Fix for true pure virtual functions not being implemented
};

