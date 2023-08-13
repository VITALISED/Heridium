#pragma once

#include "../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 16045177159931638745;
    static const unsigned __int64 muTemplateHash = 3194930697392154279;
    static const int miNumMembers = 2;

    eAbandonedFreighterMissionState meAbandonedFreighterMissionState;
    bool mbSilent;

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