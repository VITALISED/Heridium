#pragma once
#include "../../../../pch.h"

enum eItemShopAvailabilityDifficulty
{
    EItemShopAvailabilityDifficulty_High = 0,
    EItemShopAvailabilityDifficulty_Normal = 1,
    EItemShopAvailabilityDifficulty_Low = 2,
};

class cGcItemShopAvailabilityDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0x9E64FF6ABCCC176A;
    static const unsigned __int64 muTemplateHash = 0x45E28131CA26A14B;
    static const int miNumMembers = 1;

    eItemShopAvailabilityDifficulty meItemShopAvailabilityDifficulty;

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
