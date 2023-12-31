#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/robots/gcdronecontroldata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/robots/gcsentinelresource.meta.h"

class cGcDroneData
{
public:
    static const unsigned __int64 muNameHash = 0xC42B2790FC61E0A9;
    static const unsigned __int64 muTemplateHash = 0x56497BC5426DAD98;
    static const int miNumMembers = 72;

    cGcDroneControlData mPatrol;
    cGcDroneControlData mAttack;
    cGcDroneControlData mSearch;
    cGcDroneControlData mScan;
    cGcDroneControlData mRepair;
    cGcDroneControlData mSummon;
    cGcDroneControlData mToCover;
    cGcDroneControlData mStun;
    cGcDroneControlData mFriendly;
    cGcDroneControlData mFriendlyFast;
    float mfCollisionAvoidOffset;
    float mfDronePatrolDistanceMin;
    float mfDronePatrolDistanceMax;
    float mfDronePatrolTargetDistance;
    float mfDronePatrolInspectDistanceMin;
    float mfDronePatrolInspectDistanceMax;
    float mfDronePatrolInspectTargetTime;
    float mfDronePatrolInspectSwitchTime;
    float mfDronePatrolInspectRadius;
    float mfDronePatrolRepelDistance;
    float mfDronePatrolRepelStrength;
    float mfDronePatrolHonkRadius;
    float mfDronePatrolHonkTime;
    int miDronePatrolHonkProbability;
    float mfDroneAlertTime;
    float mfAttackMoveLookDistanceRange;
    float mfAttackMoveLookDistanceMin;
    float mfAttackAngle;
    float mfAttackMinSpeed;
    float mfAttackActivateTime;
    float mfAttackBobAmount;
    float mfAttackBobRotation;
    float mfAttackMoveMinChoiceTime;
    float mfAttackMoveAngle;
    float mfAttackMaxDistanceFromAlert;
    float mfAttackAlertFailTime;
    cTkColour mEyeColourAlert;
    cTkColour mEyeColourSearch;
    cTkColour mEyeColourPatrol;
    TkID<128> mDamageEffect;
    float mfDamageEffectHealthPercentThreshold;
    float mfHideBehindCoverHealthPercentThreshold;
    float mfHideBehindCoverSearchRadius;
    bool mbEnableCoverPlacement;
    float mfCoverPlacementActivateTime;
    float mfCoverPlacementActivateTimeMaxRandomExtra;
    float mfCoverPlacementCooldownTime;
    float mfCoverPlacementMinDistanceFromTarget;
    float mfCoverPlacementMinDistanceFromSelf;
    float mfCoverPlacementMaxDistanceFromSelf;
    float mfCoverPlacementUpOffset;
    int miCoverPlacementMaxActiveCover;
    cGcSentinelResource mCoverResource;
    float mfDroneSearchTime;
    float mfDroneSearchRadius;
    float mfDroneSearchPauseTime;
    float mfDroneSearchCriminalScanRadius;
    float mfDroneSearchCriminalScanRadiusWanted;
    float mfDroneSearchCriminalScanRadiusInShip;
    float mfDroneScanPlayerTime;
    float mfLeanAmount;
    float mfLeanSpeedMin;
    float mfLeanSpeedRange;
    float mfEyeOffset;
    float mfEyeFocusTime;
    int miEyeNumRandomsMin;
    int miEyeNumRandomsMax;
    float mfEyeTimeMin;
    float mfEyeTimeMax;
    float mfEyeAngleMax;
    float mfEngineDirSpeedMin;
    float mfEngineDirAngleMax;

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
