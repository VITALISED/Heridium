#pragma once
#include "../../../../pch.h"

enum eCurrencyCostDifficulty
{
    ECurrencyCostDifficulty_Free = 0,
    ECurrencyCostDifficulty_Cheap = 1,
    ECurrencyCostDifficulty_Normal = 2,
    ECurrencyCostDifficulty_Expensive = 3,
};

class cGcCurrencyCostDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0x788E938DA3146A0E;
    static const unsigned __int64 muTemplateHash = 0xBA23ADBB7917F039;
    static const int miNumMembers = 1;

    eCurrencyCostDifficulty meCurrencyCostDifficulty;

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
