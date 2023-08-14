#pragma once
#include "../../../../pch.h"

enum eDamageReceivedDifficulty
{
    EDamageReceivedDifficulty_None = 0,
    EDamageReceivedDifficulty_Low = 1,
    EDamageReceivedDifficulty_Normal = 2,
    EDamageReceivedDifficulty_High = 3,
};

class cGcDamageReceivedDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0x9065C0FF676A75B3;
    static const unsigned __int64 muTemplateHash = 0xC9A9869EA0CA2FB;
    static const int miNumMembers = 1;

    eDamageReceivedDifficulty meDamageReceivedDifficulty;

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
