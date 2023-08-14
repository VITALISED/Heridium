#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/vehicles/gcmechaudioevent.meta.h"

class cGcMechAudioEventTable
{
public:
    static const unsigned __int64 muNameHash = 0xEAC7A07BBA50D64B;
    static const unsigned __int64 muTemplateHash = 0xDB4DCA895EB479AC;
    static const int miNumMembers = 12;

    cGcMechAudioEvent mMechEnter;
    cGcMechAudioEvent mMechExit;
    cGcMechAudioEvent mStepWalk;
    cGcMechAudioEvent mStepRun;
    cGcMechAudioEvent mTitanFallLanding;
    cGcMechAudioEvent mJumpLanding;
    cGcMechAudioEvent mJumpLandingSkid;
    cGcMechAudioEvent mTitanFallPoseIntro;
    cGcMechAudioEvent mJetpackTrigger;
    cGcMechAudioEvent mJetpackRetrigger;
    cGcMechAudioEvent mJetpackLP;
    cGcMechAudioEvent mJetpackLPEnd;

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
