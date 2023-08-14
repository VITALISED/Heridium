#pragma once
#include "../../../../../pch.h"

enum eCharacterState
{
    ECharacterState_Idle = 0,
    ECharacterState_Jog = 1,
    ECharacterState_JogUphill = 2,
    ECharacterState_JogDownhill = 3,
    ECharacterState_SteepSlope = 4,
    ECharacterState_Sliding = 5,
    ECharacterState_Run = 6,
    ECharacterState_Airborne = 7,
    ECharacterState_JetpackBoost = 8,
    ECharacterState_RocketBoots = 9,
    ECharacterState_Riding = 10,
    ECharacterState_Swimming = 11,
    ECharacterState_SwimmingJetpack = 12,
    ECharacterState_Death = 13,
    ECharacterState_FullBodyOverride = 14,
    ECharacterState_InSpace = 15,
    ECharacterState_LowGWalk = 16,
    ECharacterState_LowGRun = 17,
};

class cGcPlayerCharacterStateType
{
public:
    static const unsigned __int64 muNameHash = 0xDACE1F471447B685;
    static const unsigned __int64 muTemplateHash = 0xFFA0D6143FE0142C;
    static const int miNumMembers = 1;

    eCharacterState meCharacterState;

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
