#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECameraMode.h"
#include "EWorldEventPlaceType.h"
#include "ETerritoryType.h"
#include "EWorldMapTerritoryDrawType.h"
#include "EWorldMapNarrationMillitarySymbolType.h"
#include "EWorldMapNarrationFlagType.h"
#include "EWorldMapNarrationMovieType.h"
#include "NeweraWorldIconRequirementReversePolishNotationTokens.h"
#include "NeweraWorldIconGopIds.h"
#include "ViewportRect.h"
#include "WorldMapTerritoryDrawData.h"
#include "WorldMapEventDecisionSequenceData.h"
#include "WorldMapNarrationMillitarySymbolTypeData.h"
#include "WorldMapStaticDataAsset.generated.h"

class UDebugWidgetAreaDrawer;
class UDataTable;
class AWorldMapNarrationPiece;
class AWorldMapNarrationPathPart;
class AWorldMapNarrationEngageIcon;
class AWorldMapCameraTarget;
class UWorldMapWidgetPlaceName;
class UWorldMapWidgetNarrationTitle;
class UWorldMapWidgetNarrationMovie;
class UWorldMapWidgetNarrationEngageIcon;
class UWorldMapWidgetNarrationCinemaScope;
class UWorldMapWidgetEventOverview;
class UWorldMapWidgetEventIconList;
class UWorldMapWidgetEventIcon;
class UWorldMapWidgetEncampment;
class UWorldMapWidgetDummyRoot;
class UWorldMapWidgetCursor;
class UMaterialInterface;
class ULevelSequence;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UWorldMapStaticDataAsset : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMoveSpeedOnAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayCameraMoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraViewpointTransitionTimeRateOnModeTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraViewpointOnPanoramicView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewportRect CameraMoveStartRectRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewportRect CameraMoveContinueRectRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWorldMapCameraTarget> CameraTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorAccelerationAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorAccelerationSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorAttractSpeedToMovableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorAttractSpeedRateOfSpeedMaxOnCameraMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorMovableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorMovableAreaOuterBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetCursor> CursorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECameraMode, FWorldMapEventDecisionSequenceData> EventDecisionSequenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetEventOverview> EventOverviewWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetPlaceName> PlaceNameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetEncampment> EncampmentWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetEventIconList> IconListWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetEventIcon> IconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputReservableNumDirectionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDelaySecAfterDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MillitarySymbolEffectAssetIdDestroyDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldMapNarrationMillitarySymbolType, FWorldMapNarrationMillitarySymbolTypeData> MillitarySymbolTypeDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldMapNarrationFlagType, TSoftObjectPtr<UMaterialInterface>> MillitarySymbolFlagMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetDummyRoot> RootWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldMapNarrationMovieType, TSoftClassPtr<UWorldMapWidgetNarrationMovie>> MovieWidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NarrationPlayVoiceDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NarrationFadeOutSecOnForceTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<ULevelSequence>> NarrationSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetNarrationCinemaScope> CinemaScopeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWorldMapNarrationEngageIcon> EngageIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetNarrationEngageIcon> EngageIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWorldMapNarrationPathPart> PathPartClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWorldMapNarrationPiece> PieceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapWidgetNarrationTitle> NarrationTitleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewportRect PopupBorderRectRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> PostProcessMPCRadialBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldMapTerritoryDrawType, FWorldMapTerritoryDrawData> TerritoryDrawDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETerritoryType, FName> TerritoryGopIdsPlaceNameSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDebugWidgetAreaDrawer> AreaDrawerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorFocusAcceptableInnerRangeCosXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorFocusAcceptableOuterRangeCosXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNeweraWorldIconRequirementReversePolishNotationTokens> WorldIconRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldEventPlaceType, FNeweraWorldIconGopIds> WorldIconGopIdsByEventPlace;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorFocusAcceptableInnerRangeDegreeXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorFocusAcceptableOuterRangeDegreeXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldIconDataTable;
    
public:
    UWorldMapStaticDataAsset();
};

