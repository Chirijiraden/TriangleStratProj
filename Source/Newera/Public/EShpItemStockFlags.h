#pragma once
#include "CoreMinimal.h"
#include "EShpItemStockFlags.generated.h"

UENUM()
enum class EShpItemStockFlags : uint32 {
    None,
    OpenedFlag,
    ClosedFlag,
    NeedCheckStock = 0x4,
    HasCleardGameStock = 0x8,
    DummyFlag2 = 0x10,
    DummyFlag3 = 0x20,
    DummyFlag4 = 0x40,
    DummyFlag5 = 0x80,
    StockAddFlag0 = 0x100,
    StockAddFlag1 = 0x200,
    StockAddFlag2 = 0x400,
    StockAddFlag3 = 0x800,
    StockAddFlag4 = 0x1000,
    StockAddFlag5 = 0x2000,
    StockAddFlag6 = 0x4000,
    StockAddFlag7 = 0x8000,
    StockAddFlag8 = 0x10000,
    StockAddFlag9 = 0x20000,
    StockAddFlag10 = 0x40000,
    StockAddFlag11 = 0x80000,
    StockAddFlag12 = 0x100000,
    StockAddFlag13 = 0x200000,
    StockAddFlag14 = 0x400000,
    StockAddFlag15 = 0x800000,
    StockAddFlag16 = 0x1000000,
    StockAddFlag17 = 0x2000000,
    StockAddFlag18 = 0x4000000,
    StockAddFlag19 = 0x8000000,
    StockAddFlag20 = 0x10000000,
    StockAddFlag21 = 0x20000000,
    StockAddFlag22 = 0x40000000,
    StockAddFlag23 = 0x80000000,
    EShpItemStockFlags_MAX = 0x40000001,
};

