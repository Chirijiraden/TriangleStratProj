#include "CommonBaseWidget.h"

bool UCommonBaseWidget::StopAnim(FName InAnimationName) {
    return false;
}

bool UCommonBaseWidget::PlayAnimR(FName InAnimationName, bool bSamePrefixExclusion, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
    return false;
}

void UCommonBaseWidget::PlayAnimInWidgetGroupByIndexOther(const FString& InWidgetGroupNameFormat, int32 Index, FName InAnimationName, bool bSamePrefixExclusion, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
}

void UCommonBaseWidget::PlayAnimInWidgetGroupByIndex(const FString& InWidgetGroupNameFormat, int32 Index, FName InAnimationName, bool bSamePrefixExclusion, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
}

bool UCommonBaseWidget::PlayAnimFinalFrame(FName InName) {
    return false;
}

bool UCommonBaseWidget::PlayAnim(FName InAnimationName, bool bSamePrefixExclusion, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool RestoreState) {
    return false;
}

bool UCommonBaseWidget::PauseAnim(FName InAnimationName) {
    return false;
}

UCommonBaseWidget::UCommonBaseWidget() {
}

