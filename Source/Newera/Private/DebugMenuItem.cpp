#include "DebugMenuItem.h"

class UDebugMenuResource;

bool UDebugMenuItem::IsChildMenu() const {
    return false;
}

UDebugMenuResource* UDebugMenuItem::GetChildMenu() const {
    return NULL;
}

UDebugMenuItem::UDebugMenuItem() {
    this->child = NULL;
}

