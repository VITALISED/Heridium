#pragma once

#include "../../../../../../pch.h"
class cGcTradeCategory;
class cGcTradeCategory;
class cTkTextureResource;

class cGcTradingClassData
{
    static const unsigned __int64 muNameHash = 12738252390552379521;
    static const unsigned __int64 muTemplateHash = 18341633283723404638;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};