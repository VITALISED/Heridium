#pragma once
#include "../../../../pch.h"

enum eTypeOfCost
{
    ETypeOfCost_Currency = 0,
    ETypeOfCost_Substance = 1,
    ETypeOfCost_Product = 2,
};
#include "../../../../metadata/source/metadata/reality/gccurrency.meta.h"

class cGcUnlockableTreeCostType
{
public:
    static const unsigned __int64 muNameHash = 0x702F7B1A0F3F0830;
    static const unsigned __int64 muTemplateHash = 0x35B9E521B8A19330;
    static const int miNumMembers = 5;

    TkID<128> mCostTypeID;
    eTypeOfCost meTypeOfCost;
    cGcCurrency mCurrencyType;
    TkID<128> mTypeID;
    TkID<256> mCantAffordString;

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
