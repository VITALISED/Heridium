#pragma once
#include "../../../../../pch.h"

class cGcShipAIAttackData
{
public:
    static const unsigned __int64 muNameHash = 0xA9C402167AF9D69B;
    static const unsigned __int64 muTemplateHash = 0xE631E6FFCC918379;
    static const int miNumMembers = 48;

    TkID<128> mId;
    float mfGunDispersionAngle;
    float mfGunFireRate;
    float mfLaserHealthPoint;
    float mfAttackWeaponRange;
    float mfAttackAngle;
    float mfAttackShootWaitTime;
    float mfAttackShootTimeMin;
    float mfAttackShootTimeMax;
    float mfAttackReadyTime;
    float mfAttackMaxTime;
    float mfAttackApproachOffset;
    float mfAttackApproachMinRange;
    float mfAttackApproachMaxRange;
    float mfAttackTooCloseRange;
    float mfAttackFlybyOffset;
    float mfAttackBoostTimeToRange;
    float mfAttackBoostRange;
    float mfAttackBoostAngle;
    float mfAttackTurnMultiplier;
    float mfAttackMaxPlanetHeight;
    float mfAttackTurnMultiplierMax;
    float mfAttackTurnMaxMinTime;
    float mfAttackTurnMaxTimeRange;
    int miNumHitsBeforeBail;
    int miNumHitsBeforeReposition;
    float mfFleeBrake;
    float mfFleeBoost;
    float mfFleeBrakeTime;
    float mfFleeRepositionTime;
    float mfFleeRepositionAngleMin;
    float mfFleeRepositionAngleMax;
    float mfFleeUrgentBrake;
    float mfFleeUrgentBoost;
    float mfFleeUrgentBrakeTime;
    float mfFleeRepositionUrgentTime;
    float mfFleeRepositionUrgentAngleMin;
    float mfFleeRepositionUrgentAngleMax;
    float mfFleeRange;
    float mfFleeMinTime;
    float mfFleeMaxTime;
    float mfFleeUrgentRange;
    float mfPlanetFleeHeightExtra;
    float mfAttackTargetMinRange;
    float mfAttackTargetMaxRange;
    float mfAttackTargetOffsetMin;
    float mfAttackTargetOffsetMax;
    float mfAttackTargetSwitchTargetTime;

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
