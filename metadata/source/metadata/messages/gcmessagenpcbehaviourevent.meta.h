#pragma once

#include "../../../../../../pch.h"
class cGcNPCTriggerTypes;

class cGcMessageNPCBehaviourEvent
{
    static const unsigned __int64 muNameHash = 4681464447328533920;
    static const unsigned __int64 muTemplateHash = 4595420149717186832;
    static const int miNumMembers = 6;

    TkID<128> mBehaviourEvent;
    TkID<128> mUserData;
    cGcNPCTriggerTypes mInteractionTrigger;
    int miInteractionSubType;
    cTkVector mPosition;
    TkHandle mSourceNode;

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
