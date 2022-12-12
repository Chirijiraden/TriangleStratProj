#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FrameGrabberActor.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class NEWERA_API AFrameGrabberActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float viewprotScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> captureFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* captureFrameTexture;
    
    AFrameGrabberActor();
};

