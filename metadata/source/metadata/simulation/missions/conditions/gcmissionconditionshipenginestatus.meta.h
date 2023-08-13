#pragma once
#include "../../../../../../../../pch.h"

enum eEngineStatus
{
    EEngineStatus_Thrusting = 0,
    EEngineStatus_Braking = 1,
    EEngineStatus_Landing = 2,
    EEngineStatus_Landed = 3,
    EEngineStatus_Boosting = 4,
    EEngineStatus_Pulsing = 5,
    EEngineStatus_LowFlight = 6,
    EEngineStatus_Inverted = 7,
};

class cGcMissionConditionShipEngineStatus
{
    static const unsigned __int64 muNameHash = 0x9A43A9B870251F8C;
    static const unsigned __int64 muTemplateHash = 0x39385853D394BC7C;
    static const int miNumMembers = 1;

    eEngineStatus meEngineStatus;

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
