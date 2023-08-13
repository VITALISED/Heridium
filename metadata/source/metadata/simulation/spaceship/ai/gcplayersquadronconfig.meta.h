#pragma once

#include "../../../../../../../../pch.h"
class cGcPlayerSquadronConfig
{
    static const unsigned __int64 muNameHash = 953652387754814280;
    static const unsigned __int64 muTemplateHash = 14520306013744361460;
    static const int miNumMembers = 91;

    cTkFixedString<32,char> macSquadName;
    cTkFixedArray<cTkVector2> maPilotRankTraitRanges;
    cTkFixedArray<TkID<128> > maPilotRankAttackDefinitions;
    float mfSummonArriveTime;
    float mfSummonArriveTimeIntervalMin;
    float mfSummonArriveTimeIntervalMax;
    float mfSummonStartSpeed;
    float mfSummonLimitTurningTime;
    float mfMinSpeedForSummonInMoveDir;
    float mfSummonSpaceSpawnRangeMin;
    float mfSummonSpaceSpawnRangeMax;
    float mfSummonSpaceSpawnAngleMin;
    float mfSummonSpaceSpawnAngleMax;
    float mfSummonPlanetPitchMin;
    float mfSummonPlanetPitchMax;
    float mfSummonPlanetYawMin;
    float mfSummonPlanetYawMax;
    float mfSummonPlanetDistance;
    bool mbSummonInFormation;
    float mfSummonInFormationFwdOffset;
    float mfLeavingForceScaleDistMin;
    float mfLeavingForceScaleDistMax;
    float mfLeavingMaxForceMultiplier;
    float mfLeavingFromPlanetOrbitWarpDist;
    float mfLeavingFromPlanetOrbitMinIncline;
    float mfLeavingFromPlanetOrbitMaxSpeed;
    float mfLeavingFromSpaceWarpDist;
    float mfLeavingFromSpaceAngleFromFwdMin;
    float mfLeavingFromSpaceAngleFromFwdMax;
    float mfFormationOffsetRotationPeriod;
    float mfFormationOffsetRotationMaxSpeed;
    float mfFormationOffsetZOffsetVarianceMinSpeedScale;
    float mfFormationOffsetZOffsetVarianceMaxSpeedScale;
    float mfFormationOffsetZOffsetVariancePeriod;
    float mfFormationOffsetZOffsetVarianceMin;
    float mfFormationOffsetZOffsetVarianceMax;
    cTkVector mFormationOffset;
    float mfFormationOffsetCylinderWidth;
    float mfFormationOffsetCylinderHeight;
    float mfFormationOffsetCylinderLength;
    cTkVector mFormationOffsetThirdPerson;
    float mfFormationOffsetCylinderWidthThirdPerson;
    float mfFormationOffsetCylinderHeightThirdPerson;
    float mfFormationOffsetCylinderLengthThirdPerson;
    cTkVector mCombatFormationOffset;
    float mfCombatFormationOffsetCylinderWidth;
    float mfCombatFormationOffsetCylinderHeight;
    float mfCombatFormationOffsetCylinderLength;
    cTkVector mCombatFormationOffsetThirdPerson;
    float mfCombatFormationOffsetCylinderWidthThirdPerson;
    float mfCombatFormationOffsetCylinderHeightThirdPerson;
    float mfCombatFormationOffsetCylinderLengthThirdPerson;
    float mfMaintainFormationStrengthVariance;
    float mfMaintainFormationInCombatMinTime;
    float mfMaintainFormationInCombatMaxTime;
    float mfMaintainFormationStartSmoothTime;
    float mfMaintainFormationMaxForce;
    float mfMaintainFormationLockStrength;
    float mfMaintainFormationLockStrengthCombat;
    float mfMaintainFormationLockStrengthBoosting;
    float mfMaintainFormationPostBoostSmoothTime;
    float mfMaintainFormationLockAlignStrength;
    float mfMaintainFormationLockRollAlignStrength;
    float mfMaintainFormationAlignMinDist;
    float mfMaintainFormationAlignMaxDist;
    float mfMaintainFormationAlignMinSpeed;
    float mfMaintainFormationAlignMaxSpeed;
    float mfMaintainFormationSharpTurnMinSpeed;
    float mfMaintainFormationSharpTurnMinSpeedForce;
    float mfJoinFormationMaxForce;
    float mfJoinFormationOffset;
    float mfJoinFormationArrivalTolerance;
    float mfJoinFormationBoostMaxSpeed;
    float mfJoinFormationBoostMinDist;
    float mfJoinFormationBoostMaxDist;
    float mfJoinFormationBoostAlignStrength;
    float mfJoinFormationBrakeAlignStrength;
    float mfJoinFormationBrakeDist;
    float mfJoinFormationMinSpeed;
    float mfJoinFormationMaxSpeedBrake;
    float mfBreakFormationTime;
    float mfBreakFormationMaxForce;
    float mfBreakFormationMinTurnAngle;
    float mfBreakFormationMaxTurnAngle;
    float mfMinTimeBetweenFormationBreaks;
    int miMinShipsInFormationDuringCombat;
    int miMaxShipsInFormationDuringCombat;
    float mfOutOfFormationMinTime;
    float mfOutOfFormationMaxTime;
    cTkDynamicArray<cGcAISpaceshipModelData> maRandomSpaceshipResources;
    cTkDynamicArray<cTkFixedString<128,char> > maRandomPilotNPCResources;

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
