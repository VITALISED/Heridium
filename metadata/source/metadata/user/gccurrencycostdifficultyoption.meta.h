#pragma once

#include "../../../../../../pch.h"
enum eCurrencyCostDifficulty
{
    ECurrencyCostDifficulty_Free = 0,
    ECurrencyCostDifficulty_Cheap = 1,
    ECurrencyCostDifficulty_Normal = 2,
    ECurrencyCostDifficulty_Expensive = 3,
};

class cGcCurrencyCostDifficultyOption
{
    static const unsigned __int64 muNameHash = 8687042967779961358;
    static const unsigned __int64 muTemplateHash = 13412755135941570617;
    static const int miNumMembers = 1;

    eCurrencyCostDifficulty meCurrencyCostDifficulty;

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
