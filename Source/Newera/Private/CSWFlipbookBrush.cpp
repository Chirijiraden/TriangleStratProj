#include "CSWFlipbookBrush.h"

FCSWFlipbookBrush::FCSWFlipbookBrush() {
    this->SourceFlipbook = NULL;
    this->SpriteDirection = EFlipbookDirectionType::BOTTOM;
    this->bAutoPlay = false;
    this->bLoop = false;
    this->PlayRate = 0.00f;
    this->StartKeyFrame = 0;
}

