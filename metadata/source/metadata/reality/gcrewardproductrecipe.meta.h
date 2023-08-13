#pragma once

#include "../../../../../../pch.h"
class cGcRealitySubstanceCategory;
class cGcRarity;

class cGcRewardProductRecipe
{
    static const unsigned __int64 muNameHash = 2838985779071570471;
    static const unsigned __int64 muTemplateHash = 9738559194200595544;
    static const int miNumMembers = 5;

    cGcRealitySubstanceCategory mItemCatagory;
    cGcRarity mItemRarity;
    bool mbIgnoreRarity;
    int miItemLevel;
    cTkFixedArray<bool> maAllowedProductTypes;

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
