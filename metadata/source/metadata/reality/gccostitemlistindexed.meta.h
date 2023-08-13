#pragma once
#include "../../../../../../pch.h"

enum eItemOutOfBoundsBehaviour
{
    EItemOutOfBoundsBehaviour_NoCost = 0,
    EItemOutOfBoundsBehaviour_UseFirst = 1,
    EItemOutOfBoundsBehaviour_UseLast = 2,
};

enum eItemIndexProvider
{
    EItemIndexProvider_None = 0,
    EItemIndexProvider_Biome = 1,
    EItemIndexProvider_SubBiome = 2,
};

class cGcCostItemListIndexed
{
    static const unsigned __int64 muNameHash = 0xA57C34B1B939D649;
    static const unsigned __int64 muTemplateHash = 0x3C8007CCCC34B3A4;
    static const int miNumMembers = 5;

    cTkDynamicArray<TkID<128> > maCosts;
    int miAmount;
    bool mbAssertIfOutOfBounds;
    eItemOutOfBoundsBehaviour meItemOutOfBoundsBehaviour;
    eItemIndexProvider meItemIndexProvider;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
