#pragma once
#include "../../../../pch.h"

class cGcGroundWormComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x93C5F18EADCD6C3C;
    static const unsigned __int64 muTemplateHash = 0x5D4EF68A1BE622F5;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
