#pragma once
#include "../../../../pch.h"

enum eCreatureHostilityDifficulty
{
    ECreatureHostilityDifficulty_NeverAttack = 0,
    ECreatureHostilityDifficulty_AttackIfProvoked = 1,
    ECreatureHostilityDifficulty_FullEcosystem = 2,
};

class cGcCreatureHostilityDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0x2B740202A0E2CC57;
    static const unsigned __int64 muTemplateHash = 0xD86131FEFF826FFC;
    static const int miNumMembers = 1;

    eCreatureHostilityDifficulty meCreatureHostilityDifficulty;

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
