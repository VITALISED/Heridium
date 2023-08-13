#pragma once

#include "../../../../../../pch.h"
enum eResponseType
{
    EResponseType_DontIntervene = 0,
    EResponseType_InterveneWithMission = 1,
    EResponseType_MissionSuccess = 2,
    EResponseType_MissionFailure = 3,
};

class cGcRewardInterventionResponse
{
    static const unsigned __int64 muNameHash = 4508186946217343496;
    static const unsigned __int64 muTemplateHash = 10977019161375052817;
    static const int miNumMembers = 2;

    eResponseType meResponseType;
    TkID<128> mMissionID;

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
