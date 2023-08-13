#pragma once

#include "../../../../../../pch.h"
class cGcPetBehaviours;
class cTkCurveType;

class cGcDebugScene
{
    static const unsigned __int64 muNameHash = 13092411210373004800;
    static const unsigned __int64 muTemplateHash = 7464089139947813454;
    static const int miNumMembers = 67;

    bool mbActive;
    bool mbDebugDraw;
    bool mbAutoSave;
    cTkDynamicArray<cGcExperienceDebugTriggerInput> maTriggerActions;
    bool mbFlyCamSmooth;
    float mfFlyCamSmoothFactor;
    float mfFlyCamSpeedModifier;
    float mfNPCIdleMinDelay;
    float mfNPCIdleMaxDelay;
    cTkDynamicArray<TkID<128> > maDefaultNPCIdles;
    cTkDynamicArray<cGcNPCDebugSpawnData> maDebugNPCSpawns;
    bool mbLoadPetsFromDebugScene;
    bool mbUpdatePetMoods;
    bool mbResetMoodsOnSummon;
    bool mbShowAccessoryMoods;
    cGcPetBehaviours mPetForceBehaviour;
    cTkFixedArray<cGcPetData> maPets;
    cTkFixedArray<cGcPetCustomisationData> maPetAccessoryCustomisation;
    bool mbForcePlayerWalk;
    float mfPlayerWalkSpeed;
    int miPetRideIndex;
    cTkDynamicArray<cTkVector> maPetRideWayPoints;
    bool mbForceSunPosition;
    cTkVector mForcedSunPosition;
    bool mbControlClouds;
    float mfCloudCover;
    float mfCloudAnimScale;
    cTkVector2 mCloudWindOffset;
    cTkVector2 mCloudStratosphereWindOffset;
    bool mbBusyShips;
    float mfCustomShipDockedTime;
    float mfShipSpawningMultiplier;
    cTkDynamicArray<cGcDebugShipTravelLine> maDebugShipPaths;
    cTkDynamicArray<cGcDebugCamera> maDebugCameraPaths;
    cTkDynamicArray<cGcCreatureDebugSpawnData> maDebugCreatureSpawns;
    cTkDynamicArray<cGcMechDebugSpawnData> maDebugMechSpawns;
    cTkDynamicArray<cGcAIShipDebugSpawnData> maDebugEnemyShipSpawns;
    cTkDynamicArray<cGcAIShipDebugSpawnData> maDebugShipSpawns;
    cTkFixedArray<cGcCameraFollowSettings> maVehicleCameraOverride;
    bool mbDebugDroneScanPlayer;
    cTkVector mDebugDroneSpawn;
    cTkVector mDebugDroneTarget;
    int miDebugNumDrones;
    cTkVector mDebugWalkerSpawn;
    cTkVector mDebugWalkerTarget;
    cTkVector mDebugFlybyTarget;
    cTkVector mDebugFlybyDir;
    float mfDebugFlybyRange;
    cTkSeed mDebugFlybySeed;
    TkID<128> mDebugExperienceCamShake;
    cTkVector mDebugShipSpawnPos;
    cTkVector mDebugShipSpawnFacing;
    cTkVector mDebugShipSpawnUp;
    TkID<128> mPulseEncounter;
    TkID<128> mBackgroundSpaceEncounter;
    cTkVector mSandwormSpawnPos;
    cTkVector mDebugFrigateFlybySpawnPos;
    float mfDebugFrigateFlybyRotation;
    float mfDebugFrigateFlybyHeightOffset;
    TkID<128> mNormandyReward;
    TkID<128> mLivingFrigateReward;
    float mfCameraSpinTime;
    float mfCameraSpinRevolutions;
    float mfCameraSpinVerticalOffset;
    float mfCameraSpinDistanceOffset;
    cTkCurveType mCameraSpinEasing;
    cTkFixedArray<cGcDebugPlanetPos> maPlanetPositions;

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
