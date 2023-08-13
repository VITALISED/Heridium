#pragma once
#include "../../../../../../../../pch.h"

enum eCombatType
{
    ECombatType_GroundCombat = 0,
    ECombatType_SpaceCombat = 1,
    ECombatType_FiendCombat = 2,
    ECombatType_BigFishFiendCombat = 3,
    ECombatType_CorruptedSentinelCombat = 4,
    ECombatType_GroundWormCombat = 5,
    ECombatType_RewardEncounter = 6,
};

class cGcMissionConditionInCombat
{
    static const unsigned __int64 muNameHash = 0x326A8803E3B79519;
    static const unsigned __int64 muTemplateHash = 0xC05E3E5570BE569E;
    static const int miNumMembers = 4;

    eCombatType meCombatType;
    TkID<256> mOverrideOSDMessage;
    bool mbCheckAllFireteamMembers;
    bool mbEncouragesFightingSentinels;

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
