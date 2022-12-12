#pragma once
#include "CoreMinimal.h"
#include "WorldMapWidgetBase.h"
#include "WorldMapOrderedInitializationInterface.h"
#include "WorldMapEventMarkInterface.h"
#include "WorldMapWidgetEncampment.generated.h"

class UWorldMapWidgetPlaceName;
class UWorldMapWidgetEventIconList;
class UWorldMapWidgetEncampmentIcon;
class UWorldMapWidgetEncampmentCheckCommand;
class UWorldMapWidgetCursor;

UCLASS(Blueprintable, EditInlineNew)
class UWorldMapWidgetEncampment : public UWorldMapWidgetBase, public IWorldMapEventMarkInterface, public IWorldMapOrderedInitializationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIconList* WB_WorldMap_EventIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEncampmentIcon* WB_WorldMap_Encampment_Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEncampmentCheckCommand* WB_WorldMap_CheckCommand_Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetPlaceName* WB_WorldMap_PlaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetCursor* WB_WorldMap_Pointer;
    
public:
    UWorldMapWidgetEncampment();
    
    // Fix for true pure virtual functions not being implemented
};

