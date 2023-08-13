#pragma once

#include "../../../../../../pch.h"
enum eTechListRewardOrder
{
    ETechListRewardOrder_OneRandom = 0,
    ETechListRewardOrder_InOrder = 1,
    ETechListRewardOrder_TryAllRandom = 2,
};

class cGcRewardSpecificTechFromList
{
    static const unsigned __int64 muNameHash = 17525266131166584395;
    static const unsigned __int64 muTemplateHash = 17696202395503111419;
    static const int miNumMembers = 3;

    cTkDynamicArray<TkID<128> > maTechList;
    bool mbFailIfAllKnown;
    eTechListRewardOrder meTechListRewardOrder;

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
