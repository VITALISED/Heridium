#pragma once
#include "../../../../../../pch.h"

class cGcUniverseAddressData;
class cGcUniverseAddressData;
class cGcDifficultyStateData;
class cGcInventoryContainer;
class cGcInventoryContainer;
class cGcInventoryContainer;
class cGcInventoryContainer;
class cGcInventoryContainer;
class cGcByteBeatLibraryData;
class cGcInventoryContainer;
class cGcUniverseAddressData;
class cGcInventoryLayout;
class cGcInventoryLayout;
class cGcResourceElement;
class cGcExactResource;
class cGcInteractionData;
class cGcInteractionData;
class cGcInteractionData;
class cGcUniverseAddressData;
class cGcUniverseAddressData;
class cGcResourceElement;
class cGcInventoryLayout;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryContainer;
class cGcInventoryContainer;
class cGcUniverseAddressData;
class cGcTerrainEditsBuffer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcResourceElement;
class cGcPortalSaveData;
class cGcTeleportEndpoint;
class cGcPlayerWeapons;
class cGcPlayerWeapons;
class cGcUniverseAddressData;
class cGcPlayerSpawnStateData;
class cGcUniverseAddressData;
class cGcPhotoModeSettings;
class cGcSeasonalGameModeData;
class cGcSeasonStateData;

class cGcPlayerStateData
{
    static const unsigned __int64 muNameHash = 0x6C4510BB243EFA64;
    static const unsigned __int64 muTemplateHash = 0x8FEEE8175F5670DD;
    static const int miNumMembers = 227;

    cGcUniverseAddressData mUniverseAddress;
    cGcUniverseAddressData mPreviousUniverseAddress;
    int miHomeRealityIteration;
    cTkFixedString<128,char> macSaveName;
    cTkFixedString<128,char> macSaveSummary;
    cGcDifficultyStateData mDifficultyState;
    cGcInventoryContainer mInventory;
    cGcInventoryContainer mInventory_TechOnly;
    cGcInventoryContainer mInventory_Cargo;
    cGcInventoryContainer mShipInventory;
    cGcInventoryContainer mWeaponInventory;
    cTkFixedArray<cGcMultitoolData> maMultitools;
    int miActiveMultioolIndex;
    cGcByteBeatLibraryData mByteBeatLibrary;
    cTkFixedArray<cGcPetData> maPets;
    cTkFixedArray<cGcPetData> maEggs;
    cTkFixedArray<cGcPetCustomisationData> maPetAccessoryCustomisation;
    cTkFixedArray<bool> maUnlockedPetSlots;
    cGcInventoryContainer mGraveInventory;
    bool mbSpawnGrave;
    bool mbSpaceGrave;
    cGcUniverseAddressData mGraveUniverseAddress;
    cTkVector4 mGravePosition;
    cTkVector4 mGraveMatrixLookAt;
    cTkVector4 mGraveMatrixUp;
    cGcInventoryLayout mShipLayout;
    cGcInventoryLayout mWeaponLayout;
    cGcResourceElement mCurrentShip;
    cGcExactResource mCurrentWeapon;
    cTkDynamicArray<TkID<128> > maKnownTech;
    cTkDynamicArray<TkID<128> > maKnownProducts;
    cTkDynamicArray<TkID<128> > maKnownSpecials;
    cTkDynamicArray<TkID<256> > maKnownRefinerRecipes;
    cTkDynamicArray<cGcWordKnowledge> maKnownWords;
    cTkDynamicArray<cGcWordGroupKnowledge> maKnownWordGroups;
    cTkDynamicArray<cGcPlayerMissionProgress> maMissionProgress;
    int miPostMissionIndex;
    TkID<128> mCurrentMissionID;
    unsigned __int64 mui64CurrentMissionSeed;
    TkID<128> mPreviousMissionID;
    unsigned __int64 mui64PreviousMissionSeed;
    int miMissionVersion;
    cTkDynamicArray<cGcMissionIDEpochPair> maMissionRecurrences;
    cGcInteractionData mHoloExplorerInteraction;
    cGcInteractionData mHoloScepticInteraction;
    cGcInteractionData mHoloNooneInteraction;
    int miHealth;
    int miShipHealth;
    int miShield;
    int miShipShield;
    int miEnergy;
    int miUnits;
    int miNanites;
    int miSpecials;
    bool mbThirdPersonShip;
    unsigned __int64 mui64TimeAlive;
    unsigned __int64 mui64TotalPlayTime;
    cTkDynamicArray<cGcScanEventSave> maMarkerStack;
    cTkDynamicArray<cGcScanEventSave> maNewMPMarkerStack;
    cTkDynamicArray<cTkVector> maSurveyedEventPositions;
    int miNextSurveyedEventPositionIndex;
    cTkDynamicArray<cGcPlayerStatsGroup> maStats;
    cTkDynamicArray<cGcTelemetryStat> maTelemetryStats;
    cTkFixedArray<cGcInteractionBuffer> maStoredInteractions;
    cTkDynamicArray<cGcMaintenanceContainer> maMaintenanceInteractions;
    cTkDynamicArray<cGcMaintenanceContainer> maPersonalMaintenanceInteractions;
    cTkDynamicArray<unsigned __int64> maVisitedSystems;
    cTkFixedArray<float> maHazard;
    int miBoltAmmo;
    int miScatterAmmo;
    int miPulseAmmo;
    int miLaserAmmo;
    cTkVector4 mFirstSpawnPosition;
    cTkFixedArray<cGcSavedInteractionRaceData> maSavedInteractionIndicies;
    cTkDynamicArray<cGcSavedInteractionDialogData> maSavedInteractionDialogTable;
    cTkDynamicArray<TkID<256> > maInteractionProgressTable;
    cTkFixedArray<cGcUniverseAddressData> maAtlasStationAdressData;
    cTkFixedArray<cGcUniverseAddressData> maNewAtlasStationAdressData;
    cTkDynamicArray<cGcUniverseAddressData> maVisitedAtlasStationsData;
    bool mbFirstAtlasStationDiscovered;
    bool mbUsesThirdPersonCharacterCam;
    int miProgressionLevel;
    int miProcTechIndex;
    bool mbIsNew;
    bool mbUseSmallerBlackholeJumps;
    cTkDynamicArray<cGcSavedEntitlement> maUsedEntitlements;
    cTkFixedArray<cTkVector> maPlanetPositions;
    cTkFixedArray<cTkSeed> maPlanetSeeds;
    int miPrimaryPlanet;
    unsigned __int64 mui64TimeLastSpaceBattle;
    int miWarpsLastSpaceBattle;
    unsigned __int64 mui64ActiveSpaceBattleUA;
    unsigned __int64 mui64TimeLastMiniStation;
    int miWarpsLastMiniStation;
    unsigned __int64 mui64MiniStationUA;
    cTkVector4 mAnomalyPositionOverride;
    cGcUniverseAddressData mGameStartAddress1;
    cGcUniverseAddressData mGameStartAddress2;
    cTkFixedArray<bool> maGalacticMapRequests;
    cTkVector4 mFirstShipPosition;
    unsigned __int64 mui64HazardTimeAlive;
    bool mbRevealBlackHoles;
    cTkSeed mCurrentFreighterHomeSystemSeed;
    cGcResourceElement mCurrentFreighter;
    cGcInventoryLayout mFreighterLayout;
    cGcInventoryLayout mFreighterCargoLayout;
    cGcInventoryContainer mFreighterInventory;
    cGcInventoryContainer mFreighterInventory_TechOnly;
    cGcInventoryContainer mFreighterInventory_Cargo;
    unsigned __int64 mui64FreighterLastSpawnTime;
    cGcUniverseAddressData mFreighterUniverseAddress;
    bool mbFreighterDismissed;
    cTkVector mFreighterMatrixAt;
    cTkVector mFreighterMatrixUp;
    cTkVector mFreighterMatrixPos;
    cTkFixedArray<bool> maSquadronUnlockedPilotSlots;
    cTkFixedArray<cGcSquadronPilotData> maSquadronPilots;
    cTkDynamicArray<TkID<128> > maSeenBaseBuildingObjects;
    cTkDynamicArray<cGcPersistentBBObjectData> maBaseBuildingObjects;
    cGcTerrainEditsBuffer mTerrainEditData;
    cTkFixedArray<cGcNPCWorkerData> maNPCWorkers;
    cTkDynamicArray<cGcPersistentBase> maPersistentPlayerBases;
    cTkDynamicArray<cGcTeleportEndpoint> maTeleportEndpoints;
    cGcInventoryLayout mChest1Layout;
    cGcInventoryContainer mChest1Inventory;
    cGcInventoryLayout mChest2Layout;
    cGcInventoryContainer mChest2Inventory;
    cGcInventoryLayout mChest3Layout;
    cGcInventoryContainer mChest3Inventory;
    cGcInventoryLayout mChest4Layout;
    cGcInventoryContainer mChest4Inventory;
    cGcInventoryLayout mChest5Layout;
    cGcInventoryContainer mChest5Inventory;
    cGcInventoryLayout mChest6Layout;
    cGcInventoryContainer mChest6Inventory;
    cGcInventoryLayout mChest7Layout;
    cGcInventoryContainer mChest7Inventory;
    cGcInventoryLayout mChest8Layout;
    cGcInventoryContainer mChest8Inventory;
    cGcInventoryLayout mChest9Layout;
    cGcInventoryContainer mChest9Inventory;
    cGcInventoryLayout mChest10Layout;
    cGcInventoryContainer mChest10Inventory;
    cGcInventoryLayout mChestMagicLayout;
    cGcInventoryContainer mChestMagicInventory;
    cGcInventoryLayout mChestMagic2Layout;
    cGcInventoryContainer mChestMagic2Inventory;
    cGcInventoryLayout mCookingIngredientsLayout;
    cGcInventoryContainer mCookingIngredientsInventory;
    cGcInventoryLayout mRocketLockerLayout;
    cGcInventoryContainer mRocketLockerInventory;
    cGcResourceElement mCurrentFreighterNPC;
    cTkFixedArray<cGcPlayerOwnershipData> maVehicleOwnership;
    int miPrimaryVehicle;
    cTkFixedArray<cGcPlayerOwnershipData> maShipOwnership;
    int miPrimaryShip;
    bool mbMultiShipEnabled;
    bool mbVehicleAIControlEnabled;
    cTkFixedString<32,char> macPlayerFreighterName;
    cTkVector4 mStartGameShipPosition;
    bool mbShipNeedsTerrainPositioning;
    int miTradingSupplyDataIndex;
    cTkDynamicArray<cGcTradingSupplyData> maTradingSupplyData;
    cTkDynamicArray<cGcPortalSaveData> maLastPortal;
    cGcPortalSaveData mVisitedPortal;
    int miKnownPortalRunes;
    bool mbOnOtherSideOfPortal;
    cGcTeleportEndpoint mOtherSideOfPortalReturnBase;
    cTkVector4 mPortalMarkerPosition_Local;
    cTkVector4 mPortalMarkerPosition_Offset;
    cGcPlayerWeapons mStartingPrimaryWeapon;
    cGcPlayerWeapons mStartingSecondaryWeapon;
    cTkFixedArray<cGcCharacterCustomisationSaveData> maCharacterCustomisationData;
    cTkFixedArray<bool> maShipUsesLegacyColours;
    cTkFixedArray<cGcCharacterCustomisationData> maOutfits;
    TkID<128> mJetpackEffect;
    TkID<128> mFreighterEngineEffect;
    cTkSeed mFleetSeed;
    cTkDynamicArray<cGcFleetFrigateSaveData> maFleetFrigates;
    cTkDynamicArray<cGcFleetExpeditionSaveData> maFleetExpeditions;
    cTkDynamicArray<unsigned __int64> maExpeditionSeedsSelectedToday;
    unsigned __int64 mui64LastKnownDay;
    unsigned __int64 mui64SunTimer;
    unsigned __int64 mui64MultiplayerLobbyID;
    cGcUniverseAddressData mMultiplayerUA;
    cGcPlayerSpawnStateData mMultiplayerSpawn;
    cTkDynamicArray<cGcRepairTechData> maRepairTechBuffer;
    unsigned __int64 mui64MultiplayerPrivileges;
    cTkFixedArray<cGcHotActionsSaveData> maHotActions;
    unsigned __int64 mui64LastUABeforePortalWarp;
    unsigned __int64 mui64StoryPortalSeed;
    unsigned __int16 muiShopNumber;
    unsigned __int16 muiShopTier;
    bool mbHasAccessToNexus;
    cGcUniverseAddressData mNexusUniverseAddress;
    cTkVector mNexusMatrixAt;
    cTkVector mNexusMatrixUp;
    cTkVector mNexusMatrixPos;
    cGcPhotoModeSettings mPhotoModeSettings;
    int miBannerIcon;
    int miBannerMainColour;
    int miBannerBackgroundColour;
    TkID<128> mBannerTitleId;
    int miTelemetryUploadVersion;
    bool mbUsesThirdPersonVehicleCam;
    float mfVRCameraOffset;
    cGcSeasonalGameModeData mSeasonData;
    cGcSeasonStateData mSeasonState;
    bool mbRestartAllInactiveSeasonalMissions;
    cTkDynamicArray<TkID<128> > maRedeemedSeasonRewards;
    cTkDynamicArray<TkID<128> > maRedeemedTwitchRewards;
    cTkDynamicArray<TkID<128> > maRedeemedPlatformRewards;
    cTkFixedArray<cGcSettlementState> maSettlementStatesV2;
    int miSettlementStateRingBufferIndexV2;
    bool mbNextLoadSpawnsWithFreshStart;
    cTkFixedArray<cGcStoryPageSeenDataArray> maSeenStories;
    cTkFixedArray<cGcWonderRecord> maWonderPlanetRecords;
    cTkFixedArray<cGcWonderRecord> maWonderCreatureRecords;
    cTkFixedArray<cGcWonderRecord> maWonderFloraRecords;
    cTkFixedArray<cGcWonderRecord> maWonderMineralRecords;
    cTkFixedArray<cGcWonderRecord> maWonderTreasureRecords;
    cTkFixedArray<cGcWonderRecord> maWonderWeirdBasePartRecords;
    cTkFixedArray<cGcWonderRecord> maWonderCustomRecords;
    cTkFixedArray<cGcWonderRecordCustomData> maWonderCustomRecordsExtraData;
    cTkFixedArray<cGcSyncBufferSaveDataArray> maSyncBuffersData;
    cTkDynamicArray<cGcMaintenanceSaveKey> maRefinerBufferKeys;
    cTkDynamicArray<cGcMaintenanceContainer> maRefinerBufferData;

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
