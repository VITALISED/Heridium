#pragma once

#include "../../../../../../pch.h"
enum eSimpleInteractionType
{
    ESimpleInteractionType_Interact = 0,
    ESimpleInteractionType_Treasure = 1,
    ESimpleInteractionType_Beacon = 2,
    ESimpleInteractionType_Scan = 3,
    ESimpleInteractionType_Save = 4,
    ESimpleInteractionType_CallShip = 5,
    ESimpleInteractionType_CallVehicle = 6,
    ESimpleInteractionType_Word = 7,
    ESimpleInteractionType_Tech = 8,
    ESimpleInteractionType_GenericReward = 9,
    ESimpleInteractionType_Feed = 10,
    ESimpleInteractionType_Ladder = 11,
    ESimpleInteractionType_ClaimBase = 12,
    ESimpleInteractionType_TeleportStartPoint = 13,
    ESimpleInteractionType_TeleportEndPoint = 14,
    ESimpleInteractionType_Portal = 15,
    ESimpleInteractionType_Chest = 16,
    ESimpleInteractionType_ResourceHarvester = 17,
    ESimpleInteractionType_BaseCapsule = 18,
    ESimpleInteractionType_Hologram = 19,
    ESimpleInteractionType_NPCTerminalMessage = 20,
    ESimpleInteractionType_VehicleBoot = 21,
    ESimpleInteractionType_BiomeHarvester = 22,
    ESimpleInteractionType_FreighterGalacticMap = 23,
    ESimpleInteractionType_FreighterChest = 24,
    ESimpleInteractionType_Collectable = 25,
    ESimpleInteractionType_Chair = 26,
    ESimpleInteractionType_BaseTreasureChest = 27,
    ESimpleInteractionType_SpawnObject = 28,
    ESimpleInteractionType_NoiseBox = 29,
    ESimpleInteractionType_AbandFreighterTeleporter = 30,
    ESimpleInteractionType_PetEgg = 31,
    ESimpleInteractionType_SubstancePickup = 32,
    ESimpleInteractionType_FreighterTeleport = 33,
    ESimpleInteractionType_MiniPortalTrigger = 34,
    ESimpleInteractionType_SuperDoopaScanner = 35,
};
class cGcRarity;
class cGcSizeIndicator;
class cGcFiendCrime;
class cGcInteractionActivationCost;
class cGcStatsEnum;
class cGcDiscoveryType;

class cGcSimpleInteractionComponentData
{
    static const unsigned __int64 muNameHash = 16925491151149439733;
    static const unsigned __int64 muTemplateHash = 11569349992439140520;
    static const int miNumMembers = 37;

    eSimpleInteractionType meSimpleInteractionType;
    float mfInteractDistance;
    bool mbUse2dInteractDistance;
    TkID<128> mId;
    cGcRarity mRarity;
    cGcSizeIndicator mSize;
    TkID<128> mTriggerAction;
    TkID<128> mTriggerActionOnPrepare;
    TkID<128> mTriggerActionToggle;
    bool mbBroadcastTriggerAction;
    float mfDelay;
    bool mbHideContents;
    bool mbInteractIsCrime;
    cGcFiendCrime mInteractFiendCrimeType;
    float mfInteractFiendCrimeChance;
    int miInteractCrimeLevel;
    bool mbNotifyEncounter;
    cGcInteractionActivationCost mActivationCost;
    cGcStatsEnum mStatToTrack;
    bool mbStartsBuried;
    bool mbMustBeVisibleToInteract;
    bool mbNeedsStorm;
    TkID<256> mName;
    TkID<256> mVRInteractMessage;
    TkID<256> mTerminalHeading;
    TkID<256> mTerminalMessage;
    TkID<256> mScanType;
    TkID<256> mScanData;
    cGcDiscoveryType mScanIcon;
    bool mbActivateLocatorsFromRarity;
    cTkFixedArray<TkID<128> > maRarityLocators;
    cTkDynamicArray<cGcInteractionBaseBuildingState> maBaseBuildingTriggerActions;
    cTkDynamicArray<cGcRewardMissionOverride> maRewardOverrideTable;
    cTkDynamicArray<cGcPersistencyMissionOverride> maPersistencyBufferOverride;
    bool mbUsePersonalPersistentBuffer;
    bool mbReseedOnRewardSuccess;
    bool mbCanCollectInMech;

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
