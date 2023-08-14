#pragma once
#include "../../../../pch.h"

enum eAbandonedFreighterMissionState
{
    EAbandonedFreighterMissionState_EndRoomComplete = 0,
    EAbandonedFreighterMissionState_CrewManifestRead = 1,
    EAbandonedFreighterMissionState_CaptainsLogRead = 2,
    EAbandonedFreighterMissionState_HazardOn = 3,
    EAbandonedFreighterMissionState_SlowWalkOn = 4,
    EAbandonedFreighterMissionState_OpenDoors = 5,
};

class cGcRewardSetAbandonedFreighterMissionState
{
public:
    static const unsigned __int64 muNameHash = 0xDEABEB9DAFEFB3D9;
    static const unsigned __int64 muTemplateHash = 0x2C56AC8AB40CE6A7;
    static const int miNumMembers = 2;

    eAbandonedFreighterMissionState meAbandonedFreighterMissionState;
    bool mbSilent;

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
