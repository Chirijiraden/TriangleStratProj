#include "NeweraRouteSearchManager.h"

class UNeweraRouteSearchManager;

UNeweraRouteSearchManager* UNeweraRouteSearchManager::GetInstance() {
    return NULL;
}

UNeweraRouteSearchManager::UNeweraRouteSearchManager() {
    this->Algorithm = NULL;
    this->AlgorithmForAsyncTask = NULL;
}

