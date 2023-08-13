#pragma once
#include "pch.h"

class cGcPetBehaviours;
class cTkCurveType;

class cGcDebugScene
{
public:
    static const unsigned __int64 muNameHash = 0xB5B196A1179FFE00;
    static const unsigned __int64 muTemplateHash = 0x6795C586BE70BA4E;
    static const int miNumMembers = 67;

    bool mbActive;
    bool mbDebugDraw;
    bool mbAutoSave;
    cTkDynamicArray<cGcExperienceDebugTriggerInput1> maTriggerActions;
    bool mbFlyCamSmooth;
    float mfFlyCamSmoothFactor;
    float mfFlyCamSpeedModifier;
    float mfNPCIdleMinDelay;
    float mfNPCIdleMaxDelay;
    cTkDynamicArray<TkID<128>1> maDefaultNPCIdles;
    cTkDynamicArray<cGcNPCDebugSpawnData1> maDebugNPCSpawns;
    bool mbLoadPetsFromDebugScene;
    bool mbUpdatePetMoods;
    bool mbResetMoodsOnSummon;
    bool mbShowAccessoryMoods;
    cGcPetBehaviours mPetForceBehaviour;
    cTkFixedArray<cGcPetData, 18> maPets;
    cTkFixedArray<cGcPetCustomisationData, 18> maPetAccessoryCustomisation;
    bool mbForcePlayerWalk;
    float mfPlayerWalkSpeed;
    int miPetRideIndex;
    cTkDynamicArray<cTkVector31> maPetRideWayPoints;
    bool mbForceSunPosition;
    cTkVector3 mForcedSunPosition;
    bool mbControlClouds;
    float mfCloudCover;
    float mfCloudAnimScale;
    cTkVector2 mCloudWindOffset;
    cTkVector2 mCloudStratosphereWindOffset;
    bool mbBusyShips;
    float mfCustomShipDockedTime;
    float mfShipSpawningMultiplier;
    cTkDynamicArray<cGcDebugShipTravelLine1> maDebugShipPaths;
    cTkDynamicArray<cGcDebugCamera1> maDebugCameraPaths;
    cTkDynamicArray<cGcCreatureDebugSpawnData1> maDebugCreatureSpawns;
    cTkDynamicArray<cGcMechDebugSpawnData1> maDebugMechSpawns;
    cTkDynamicArray<cGcAIShipDebugSpawnData1> maDebugEnemyShipSpawns;
    cTkDynamicArray<cGcAIShipDebugSpawnData1> maDebugShipSpawns;
    cTkFixedArray<cGcCameraFollowSettings, 7> maVehicleCameraOverride;
    bool mbDebugDroneScanPlayer;
    cTkVector3 mDebugDroneSpawn;
    cTkVector3 mDebugDroneTarget;
    int miDebugNumDrones;
    cTkVector3 mDebugWalkerSpawn;
    cTkVector3 mDebugWalkerTarget;
    cTkVector3 mDebugFlybyTarget;
    cTkVector3 mDebugFlybyDir;
    float mfDebugFlybyRange;
    cTkSeed mDebugFlybySeed;
    TkID<128> mDebugExperienceCamShake;
    cTkVector3 mDebugShipSpawnPos;
    cTkVector3 mDebugShipSpawnFacing;
    cTkVector3 mDebugShipSpawnUp;
    TkID<128> mPulseEncounter;
    TkID<128> mBackgroundSpaceEncounter;
    cTkVector3 mSandwormSpawnPos;
    cTkVector3 mDebugFrigateFlybySpawnPos;
    float mfDebugFrigateFlybyRotation;
    float mfDebugFrigateFlybyHeightOffset;
    TkID<128> mNormandyReward;
    TkID<128> mLivingFrigateReward;
    float mfCameraSpinTime;
    float mfCameraSpinRevolutions;
    float mfCameraSpinVerticalOffset;
    float mfCameraSpinDistanceOffset;
    cTkCurveType mCameraSpinEasing;
    cTkFixedArray<cGcDebugPlanetPos, 6> maPlanetPositions;

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
