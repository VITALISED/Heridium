#pragma once

#include "../../../../../../pch.h"
enum eProductListRewardOrder
{
    EProductListRewardOrder_OneRandom = 0,
    EProductListRewardOrder_InOrder = 1,
    EProductListRewardOrder_TryAllRandom = 2,
    EProductListRewardOrder_TryUnknownRandom = 3,
};

class cGcRewardSpecificProductRecipeFromList
{
    static const unsigned __int64 muNameHash = 14794356167886533797;
    static const unsigned __int64 muTemplateHash = 8130364783140310850;
    static const int miNumMembers = 2;

    cTkDynamicArray<TkID<128> > maProductList;
    eProductListRewardOrder meProductListRewardOrder;

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
