#pragma once
#include "pch.h"

class cGcRealitySubstanceCategory;
class cGcRarity;

class cGcRewardProduct
{
public:
    static const unsigned __int64 muNameHash = 0x893933F89479A7D8;
    static const unsigned __int64 muTemplateHash = 0x45FAC0221192A379;
    static const int miNumMembers = 6;

    cGcRealitySubstanceCategory mItemCategory;
    cGcRarity mItemRarity;
    int miItemLevel;
    cTkFixedArray<bool, 9> maAllowedProductTypes;
    int miAmountMin;
    int miAmountMax;

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
