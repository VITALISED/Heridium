#pragma once
#include "pch.h"

class cGcRealitySubstanceCategory;
class cGcRarity;

class cGcRewardProductRecipe
{
public:
    static const unsigned __int64 muNameHash = 0x27661A8643F25227;
    static const unsigned __int64 muTemplateHash = 0x87264FFD7270DC58;
    static const int miNumMembers = 5;

    cGcRealitySubstanceCategory mItemCatagory;
    cGcRarity mItemRarity;
    bool mbIgnoreRarity;
    int miItemLevel;
    cTkFixedArray<bool, 9> maAllowedProductTypes;

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
