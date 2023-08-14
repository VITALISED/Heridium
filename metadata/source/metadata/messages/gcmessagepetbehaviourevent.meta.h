#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpetbehaviours.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienmood.meta.h"

class cGcMessagePetBehaviourEvent
{
public:
    static const unsigned __int64 muNameHash = 0x9465A52B8A2F9FD9;
    static const unsigned __int64 muTemplateHash = 0x2D7AEFE1BF878CE7;
    static const int miNumMembers = 7;

    TkID<128> mBehaviourEvent;
    TkID<256> mUserData;
    cGcPetBehaviours mForceBehaviour;
    cGcAlienMood mMood;
    cTkVector3 mPosition;
    cTkVector3 mDirection;
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
