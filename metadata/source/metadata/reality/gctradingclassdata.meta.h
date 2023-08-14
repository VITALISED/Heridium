#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gctradecategory.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcTradingClassData
{
public:
    static const unsigned __int64 muNameHash = 0xB0C75D0F1E252081;
    static const unsigned __int64 muTemplateHash = 0xFE8A924B1CD0A55E;
    static const int miNumMembers = 7;

    cGcTradeCategory mSells;
    cGcTradeCategory mNeeds;
    float mfMinSellingPriceMultiplier;
    float mfMaxSellingPriceMultiplier;
    float mfMinBuyingPriceMultiplier;
    float mfMaxBuyingPriceMultiplier;
    cTkTextureResource mIcon;

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
