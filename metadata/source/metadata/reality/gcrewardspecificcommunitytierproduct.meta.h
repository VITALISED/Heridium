#pragma once
#include "../../../../pch.h"

class cGcRewardSpecificCommunityTierProduct
{
public:
    static const unsigned __int64 muNameHash = 0xA0372351D829A5B0;
    static const unsigned __int64 muTemplateHash = 0xED9C5204B538EF2E;
    static const int miNumMembers = 5;

    cTkDynamicArray<TkID<128> > maProductList;
    int miAmountMin;
    int miAmountMax;
    bool mbForceSpecialMessage;
    TkID<128> mRequiresTech;

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
