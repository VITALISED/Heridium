#pragma once

#include "../../../../../../pch.h"
enum eItemShopAvailabilityDifficulty
{
    EItemShopAvailabilityDifficulty_High = 0,
    EItemShopAvailabilityDifficulty_Normal = 1,
    EItemShopAvailabilityDifficulty_Low = 2,
};

class cGcItemShopAvailabilityDifficultyOption
{
    static const unsigned __int64 muNameHash = 11413528189562787690;
    static const unsigned __int64 muTemplateHash = 5035729384198545739;
    static const int miNumMembers = 1;

    eItemShopAvailabilityDifficulty meItemShopAvailabilityDifficulty;

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
