#pragma once
#include "../../../../pch.h"

enum eReputationGainDifficulty
{
    EReputationGainDifficulty_VeryFast = 0,
    EReputationGainDifficulty_Fast = 1,
    EReputationGainDifficulty_Normal = 2,
    EReputationGainDifficulty_Slow = 3,
};

class cGcReputationGainDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0xA394F90C4AED36BD;
    static const unsigned __int64 muTemplateHash = 0xEE494DB8A78148F1;
    static const int miNumMembers = 1;

    eReputationGainDifficulty meReputationGainDifficulty;

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
