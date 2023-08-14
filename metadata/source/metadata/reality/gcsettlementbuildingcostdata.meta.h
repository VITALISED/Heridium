#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gccurrency.meta.h"

class cGcSettlementBuildingCostData
{
public:
    static const unsigned __int64 muNameHash = 0x1746DC1EE79AD525;
    static const unsigned __int64 muTemplateHash = 0xB4313B57BEE95EF8;
    static const int miNumMembers = 5;

    cTkDynamicArray<TkID<128> > maProducts;
    cTkDynamicArray<TkID<128> > maSubstances;
    int miAmountMin;
    int miAmountMax;
    cGcCurrency mCurrency;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
