#pragma once
#include "CoreMinimal.h"
#include "WorldMapWidgetBase.h"
#include "NeweraControllInterface.h"
#include "WorldMapEventIconListElement.h"
#include "WorldMapWidgetEventIconList.generated.h"

class UImage;
class UInterpFloat;
class UWorldMapWidgetEventIcon;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UWorldMapWidgetEventIconList : public UWorldMapWidgetBase, public INeweraControllInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StackNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DummyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Arrow_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Arrow_Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIcon* WB_WorldMap_EventIcon_Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIcon* Part_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIcon* Part_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIcon* Part_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIcon* Part_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIcon* Part_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpElementMoveT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWorldMapEventIconListElement> ListElements;
    
public:
    UWorldMapWidgetEventIconList();
private:
    UFUNCTION(BlueprintCallable)
    void onCompleteInterpElementMoveT();
    
    
    // Fix for true pure virtual functions not being implemented
};

