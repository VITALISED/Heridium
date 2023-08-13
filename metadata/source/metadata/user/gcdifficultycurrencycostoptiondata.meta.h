#pragma once
#include "pch.h"

class cGcDifficultyCurrencyCostOptionData
{
public:
    static const unsigned __int64 muNameHash = 0x9061069311B1AB2E;
    static const unsigned __int64 muTemplateHash = 0x66A507799BC31D19;
    static const int miNumMembers = 5;

    cTkFixedArray<float, 3> maMultipliers;
    cTkFixedArray<bool, 3> maFreeCostTypes;
    float mfTradeBuyPriceMarkupMod;
    bool mbInteractionsCostsAreFree;
    bool mbCostManagerCostsAreFree;

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
