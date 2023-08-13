#pragma once

#include "../../../../../../pch.h"
class cGcRewardExchangeProduct
{
    static const unsigned __int64 muNameHash = 3430493407175253110;
    static const unsigned __int64 muTemplateHash = 542183820876418565;
    static const int miNumMembers = 7;

    TkID<128> mIDToGive;
    TkID<128> mIDToTake;
    int miAmountToGiveMin;
    int miAmountToGiveMax;
    int miAmountToTakeMax;
    bool mbHideNewProduct;
    bool mbForceSpecialMessage;

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
