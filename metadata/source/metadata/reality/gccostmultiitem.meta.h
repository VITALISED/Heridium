#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcitemamountcostpair.meta.h"

class cGcCostMultiItem
{
public:
    static const unsigned __int64 muNameHash = 0x8753450A435B1BC5;
    static const unsigned __int64 muTemplateHash = 0x20AFBE2273197FD8;
    static const int miNumMembers = 3;

    TkID<256> mDisplayLocID;
    bool mbOnlyTakeIfCanAfford;
    cTkDynamicArray<cGcItemAmountCostPair> maItemList;

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
