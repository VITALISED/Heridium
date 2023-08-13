#pragma once
#include "../../../../../../../../pch.h"

class cGcMissionConditionInVR
{
    static const unsigned __int64 muNameHash = 0xC52227A9653C40A8;
    static const unsigned __int64 muTemplateHash = 0x761B5B086FB9A7E8;
    static const int miNumMembers = 5;

    bool mbNeedsHandControllers;
    bool mbNeedsSnapTurnOn;
    bool mbNeedsNoHandControllers;
    bool mbNeedsTeleportOn;
    bool mbNeedsSmoothMoveOn;

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
