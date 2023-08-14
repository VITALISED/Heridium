#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/ecosystem/npcs/gcnpctriggertypes.meta.h"

class cGcMessageNPCBehaviourEvent
{
public:
    static const unsigned __int64 muNameHash = 0x40F7E71C83A33DA0;
    static const unsigned __int64 muTemplateHash = 0x3FC636475190B910;
    static const int miNumMembers = 6;

    TkID<128> mBehaviourEvent;
    TkID<128> mUserData;
    cGcNPCTriggerTypes mInteractionTrigger;
    int miInteractionSubType;
    cTkVector3 mPosition;
    TkHandle mSourceNode;

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
