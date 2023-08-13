#pragma once
#include "../../../../../../pch.h"

class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;

class cGcGrabPlayerComponentData
{
    static const unsigned __int64 muNameHash = 0xDE6FCE33E294F619;
    static const unsigned __int64 muTemplateHash = 0xB96D2F285E0ABF27;
    static const int miNumMembers = 39;

    cTkFixedString<256,char> macLookJoint;
    cTkFixedString<256,char> macGrabJoint;
    TkID<128> mDefendAnim;
    TkID<128> mIdleAnim;
    TkID<128> mGrabAnim;
    TkID<128> mHoldAnim;
    TkID<128> mHitReactAnim;
    TkID<128> mPlayerGrabbedAnim;
    TkID<128> mDamageType;
    float mfDamageTime;
    float mfTriggerRange;
    cGcAudioWwiseEvents mGrabBeginAudioEvent;
    cGcAudioWwiseEvents mGrabEndAudioEvent;
    float mfLungeRadius;
    float mfGrabRadius;
    float mfGrabAttachStrength;
    float mfGrabBlendTime;
    float mfEjectImpulse;
    cTkVector mGrabOffset;
    float mfHoldTime;
    float mfCooldownTime;
    float mfRestTime;
    float mfMaxLookAngle;
    float mfBodgeInputAngle;
    float mfBodgeOutputAngle;
    float mfHitReactAnimChance;
    cTkVector2 mHitReactAngles;
    float mfActivateRange;
    float mfFocusRange;
    float mfTrackTime;
    cTkVector2 mLookAroundTrackTime;
    float mfLookAroundFineModifier;
    cTkVector2 mLookAtPlayerTime;
    float mfLookAtPlayerChance;
    cTkVector2 mLookAroundTime;
    cTkVector2 mLookAroundAngles;
    cTkVector2 mLookAroundAnglesFine;
    float mfSleepChance;
    cTkVector2 mSleepTime;

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
