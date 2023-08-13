#pragma once
#include "../../../../../../../pch.h"

class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;
class cGcMechAudioEvent;

class cGcMechAudioEventTable
{
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
