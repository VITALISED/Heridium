#pragma once
#include "../../../../../../pch.h"

enum eSentinelCoverState
{
    ESentinelCoverState_Deploying = 0,
    ESentinelCoverState_Deployed = 1,
    ESentinelCoverState_ShuttingDown = 2,
    ESentinelCoverState_ShutDown = 3,
};

class cGcSentinelCoverState
{
    static const unsigned __int64 muNameHash = 0x9AFBFA1C253ADF63;
    static const unsigned __int64 muTemplateHash = 0x22072DF17EC2DAE;
    static const int miNumMembers = 1;

    eSentinelCoverState meSentinelCoverState;

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
