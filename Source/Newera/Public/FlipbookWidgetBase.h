#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "CSWFlipbookBrush.h"
#include "NeweraFlipbookBrushData.h"
#include "FlipbookWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UFlipbookWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSWFlipbookBrush FlipbookBrush;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalFrameNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFrameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNeweraFlipbookBrushData> BrushDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorGrayoutEffect;
    
public:
    UFlipbookWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void ReplaceFlipbook();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshFlipbook();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSourceFlipbook();
    
};

