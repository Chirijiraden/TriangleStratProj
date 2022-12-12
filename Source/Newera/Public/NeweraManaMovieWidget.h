#pragma once
#include "CoreMinimal.h"
#include "WorldMapWidgetBase.h"
#include "NeweraManaMovieWidget.generated.h"

class UManaTexture;
class ANeweraManaMovieActor;

UCLASS(Blueprintable, EditInlineNew)
class UNeweraManaMovieWidget : public UWorldMapWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* ManaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaylistIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraManaMovieActor* ManaMovieActor;
    
public:
    UNeweraManaMovieWidget();
};

