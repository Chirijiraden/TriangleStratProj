#include "FlipbookWidgetBase.h"

void UFlipbookWidgetBase::ReplaceFlipbook() {
}



UFlipbookWidgetBase::UFlipbookWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsPaused = false;
    this->TotalFrameNum = 0;
    this->CurrentFrameIndex = 0;
}

