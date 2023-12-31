#pragma once
#include "../../../../pch.h"

enum eProductListRewardOrder
{
    EProductListRewardOrder_OneRandom = 0,
    EProductListRewardOrder_InOrder = 1,
    EProductListRewardOrder_TryAllRandom = 2,
    EProductListRewardOrder_TryUnknownRandom = 3,
};

class cGcRewardSpecificProductRecipeFromList
{
public:
    static const unsigned __int64 muNameHash = 0xCD501C8D037C74A5;
    static const unsigned __int64 muTemplateHash = 0x70D4DBB1996C8F42;
    static const int miNumMembers = 2;

    cTkDynamicArray<TkID<128> > maProductList;
    eProductListRewardOrder meProductListRewardOrder;

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
