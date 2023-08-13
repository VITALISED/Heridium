#pragma once

#include "../../../../../../pch.h"
class cGcGroundWormComponentData
{
    static const unsigned __int64 muNameHash = 10648182489090976828;
    static const unsigned __int64 muTemplateHash = 6723582366744716021;
    static const int miNumMembers = 41;

    cTkFixedString<256,char> macLookJoint;
    cTkFixedString<256,char> macGrabJoint;
    TkID<128> mEmergeEffect;
    TkID<128> mSubmergeEffect;
    TkID<128> mEmergeShake;
    TkID<128> mRoarShake;
    float mfCollisionBodySize;
    float mfRumbleTime;
    float mfEmergeEffectTime;
    float mfEmergeDist;
    float mfSubmergeDist;
    float mfSubmergeDepth;
    float mfFlinchTime;
    float mfFlinchAngleMin;
    float mfFlinchAngleMax;
    float mfFlinchSmooth;
    TkID<128> mAttackDamageType;
    float mfAttackDamageRadius;
    float mfAttackAngle;
    float mfAttackDistMin;
    float mfAttackDistMax;
    float mfAttackCooldown;
    float mfRoarCooldown;
    float mfLungeStrength;
    float mfLungeAngleHead;
    float mfLungeAngleBase;
    float mfLungeBeginTime;
    float mfLungeEndTime;
    float mfLungeBlendInSpeed;
    float mfLungeBlendOutSpeed;
    float mfWindUpStrength;
    float mfWindUpAngleHead;
    float mfWindUpAngleBase;
    float mfRestTime;
    float mfTrackTime;
    float mfTurnSpeed;
    float mfEmergeLookBlendStart;
    float mfEmergeLookBlendEnd;
    float mfEmergeTime;
    float mfRearUpBeginDist;
    float mfRearUpEndDist;

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
