#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/player/experience/gcexperiencedebugtriggerinput.meta.h"
#include "../../../../metadata/source/metadata/simulation/npcs/gcnpcdebugspawndata.meta.h"
#include "../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpetbehaviours.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcpetdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcpetcustomisationdata.meta.h"
#include "../../../../metadata/source/metadata/simulation/space/spaceship/gcdebugshiptravelline.meta.h"
#include "../../../../metadata/source/metadata/simulation/vehicles/gcdebugcamera.meta.h"
#include "../../../../metadata/source/metadata/simulation/ecosystem/gccreaturedebugspawndata.meta.h"
#include "../../../../metadata/source/metadata/simulation/vehicles/gcmechdebugspawndata.meta.h"
#include "../../../../metadata/source/metadata/simulation/spaceship/ai/gcaishipdebugspawndata.meta.h"
#include "../../../../metadata/source/metadata/graphics/camera/follow/gccamerafollowsettings.meta.h"
#include "../../../../metadata/toolkit/metadata/animation/tkcurvetype.meta.h"
#include "../../../../metadata/source/metadata/simulation/spaceship/ai/gcdebugplanetpos.meta.h"

class cGcDebugScene
{
public:
    static const unsigned __int64 muNameHash = 0xB5B196A1179FFE00;
    static const unsigned __int64 muTemplateHash = 0x6795C586BE70BA4E;
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
    cTkFixedArray<cGcPetData, 18> maPets;
    cTkFixedArray<cGcPetCustomisationData, 18> maPetAccessoryCustomisation;
    bool mbForcePlayerWalk;
    float mfPlayerWalkSpeed;
    int miPetRideIndex;
    cTkDynamicArray<cTkVector3> maPetRideWayPoints;
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
    cTkDynamicArray<cGcDebugShipTravelLine> maDebugShipPaths;
    cTkDynamicArray<cGcDebugCamera> maDebugCameraPaths;
    cTkDynamicArray<cGcCreatureDebugSpawnData> maDebugCreatureSpawns;
    cTkDynamicArray<cGcMechDebugSpawnData> maDebugMechSpawns;
    cTkDynamicArray<cGcAIShipDebugSpawnData> maDebugEnemyShipSpawns;
    cTkDynamicArray<cGcAIShipDebugSpawnData> maDebugShipSpawns;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
