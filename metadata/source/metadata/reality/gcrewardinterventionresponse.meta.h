#pragma once
#include "../../../../pch.h"

enum eResponseType
{
    EResponseType_DontIntervene = 0,
    EResponseType_InterveneWithMission = 1,
    EResponseType_MissionSuccess = 2,
    EResponseType_MissionFailure = 3,
};

class cGcRewardInterventionResponse
{
public:
    static const unsigned __int64 muNameHash = 0x3E904C2466567A08;
    static const unsigned __int64 muTemplateHash = 0x985634C4BE6A9411;
    static const int miNumMembers = 2;

    eResponseType meResponseType;
    TkID<128> mMissionID;

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
