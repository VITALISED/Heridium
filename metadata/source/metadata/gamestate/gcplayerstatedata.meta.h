#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcuniverseaddressdata.meta.h"
#include "../../../../metadata/source/metadata/user/gcdifficultystatedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventorycontainer.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcmultitooldata.meta.h"
#include "../../../../metadata/source/metadata/audio/gcbytebeatlibrarydata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcpetdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcpetcustomisationdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventorylayout.meta.h"
#include "../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"
#include "../../../../metadata/source/metadata/resource/gcexactresource.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcwordknowledge.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcwordgroupknowledge.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcplayermissionprogress.meta.h"
#include "../../../../metadata/source/metadata/simulation/missions/scheduling/gcmissionidepochpair.meta.h"
#include "../../../../metadata/source/metadata/gamestate/interactions/gcinteractiondata.meta.h"
#include "../../../../metadata/source/metadata/simulation/gcscaneventsave.meta.h"
#include "../../../../metadata/source/metadata/gamestate/stats/gcplayerstatsgroup.meta.h"
#include "../../../../metadata/source/metadata/gamestate/telemetry/gctelemetrystat.meta.h"
#include "../../../../metadata/source/metadata/gamestate/interactions/gcinteractionbuffer.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcmaintenancecontainer.meta.h"
#include "../../../../metadata/source/metadata/gamestate/interactions/gcsavedinteractionracedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/interactions/gcsavedinteractiondialogdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcsavedentitlement.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcsquadronpilotdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/basebuilding/gcpersistentbbobjectdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/interactions/gcterraineditsbuffer.meta.h"
#include "../../../../metadata/source/metadata/gamestate/basebuilding/gcnpcworkerdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/basebuilding/gcpersistentbase.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcteleportendpoint.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcplayerownershipdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gctradingsupplydata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcportalsavedata.meta.h"
#include "../../../../metadata/source/metadata/simulation/weapons/gcplayerweapons.meta.h"
#include "../../../../metadata/source/metadata/gamestate/customisation/gccharactercustomisationsavedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/customisation/gccharactercustomisationdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcfleetfrigatesavedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcfleetexpeditionsavedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcplayerspawnstatedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcrepairtechdata.meta.h"
#include "../../../../metadata/source/metadata/ui/hud/quickmenu/gchotactionssavedata.meta.h"
#include "../../../../metadata/source/metadata/user/gcphotomodesettings.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcseasonalgamemodedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcseasonstatedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcsettlementstate.meta.h"
#include "../../../../metadata/source/metadata/wiki/gcstorypageseendataarray.meta.h"
#include "../../../../metadata/source/metadata/wiki/gcwonderrecord.meta.h"
#include "../../../../metadata/source/metadata/wiki/gcwonderrecordcustomdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcsyncbuffersavedataarray.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcmaintenancesavekey.meta.h"

class cGcPlayerStateData
{
public:
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
    cTkFixedArray<cGcMultitoolData, 6> maMultitools;
    int miActiveMultioolIndex;
    cGcByteBeatLibraryData mByteBeatLibrary;
    cTkFixedArray<cGcPetData, 18> maPets;
    cTkFixedArray<cGcPetData, 18> maEggs;
    cTkFixedArray<cGcPetCustomisationData, 18> maPetAccessoryCustomisation;
    cTkFixedArray<bool, 18> maUnlockedPetSlots;
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
    cTkDynamicArray<cTkVector3> maSurveyedEventPositions;
    int miNextSurveyedEventPositionIndex;
    cTkDynamicArray<cGcPlayerStatsGroup> maStats;
    cTkDynamicArray<cGcTelemetryStat> maTelemetryStats;
    cTkFixedArray<cGcInteractionBuffer, 11> maStoredInteractions;
    cTkDynamicArray<cGcMaintenanceContainer> maMaintenanceInteractions;
    cTkDynamicArray<cGcMaintenanceContainer> maPersonalMaintenanceInteractions;
    cTkDynamicArray<unsigned __int64> maVisitedSystems;
    cTkFixedArray<float, 6> maHazard;
    int miBoltAmmo;
    int miScatterAmmo;
    int miPulseAmmo;
    int miLaserAmmo;
    cTkVector4 mFirstSpawnPosition;
    cTkFixedArray<cGcSavedInteractionRaceData, 131> maSavedInteractionIndicies;
    cTkDynamicArray<cGcSavedInteractionDialogData> maSavedInteractionDialogTable;
    cTkDynamicArray<TkID<256> > maInteractionProgressTable;
    cTkFixedArray<cGcUniverseAddressData, 10> maAtlasStationAdressData;
    cTkFixedArray<cGcUniverseAddressData, 11> maNewAtlasStationAdressData;
    cTkDynamicArray<cGcUniverseAddressData> maVisitedAtlasStationsData;
    bool mbFirstAtlasStationDiscovered;
    bool mbUsesThirdPersonCharacterCam;
    int miProgressionLevel;
    int miProcTechIndex;
    bool mbIsNew;
    bool mbUseSmallerBlackholeJumps;
    cTkDynamicArray<cGcSavedEntitlement> maUsedEntitlements;
    cTkFixedArray<cTkVector3, 16> maPlanetPositions;
    cTkFixedArray<cTkSeed, 16> maPlanetSeeds;
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
    cTkFixedArray<bool, 16> maGalacticMapRequests;
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
    cTkVector3 mFreighterMatrixAt;
    cTkVector3 mFreighterMatrixUp;
    cTkVector3 mFreighterMatrixPos;
    cTkFixedArray<bool, 4> maSquadronUnlockedPilotSlots;
    cTkFixedArray<cGcSquadronPilotData, 4> maSquadronPilots;
    cTkDynamicArray<TkID<128> > maSeenBaseBuildingObjects;
    cTkDynamicArray<cGcPersistentBBObjectData> maBaseBuildingObjects;
    cGcTerrainEditsBuffer mTerrainEditData;
    cTkFixedArray<cGcNPCWorkerData, 5> maNPCWorkers;
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
    cTkFixedArray<cGcPlayerOwnershipData, 7> maVehicleOwnership;
    int miPrimaryVehicle;
    cTkFixedArray<cGcPlayerOwnershipData, 12> maShipOwnership;
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
    cTkFixedArray<cGcCharacterCustomisationSaveData, 23> maCharacterCustomisationData;
    cTkFixedArray<bool, 12> maShipUsesLegacyColours;
    cTkFixedArray<cGcCharacterCustomisationData, 3> maOutfits;
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
    cTkFixedArray<cGcHotActionsSaveData, 3> maHotActions;
    unsigned __int64 mui64LastUABeforePortalWarp;
    unsigned __int64 mui64StoryPortalSeed;
    unsigned __int16 muiShopNumber;
    unsigned __int16 muiShopTier;
    bool mbHasAccessToNexus;
    cGcUniverseAddressData mNexusUniverseAddress;
    cTkVector3 mNexusMatrixAt;
    cTkVector3 mNexusMatrixUp;
    cTkVector3 mNexusMatrixPos;
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
    cTkFixedArray<cGcSettlementState, 100> maSettlementStatesV2;
    int miSettlementStateRingBufferIndexV2;
    bool mbNextLoadSpawnsWithFreshStart;
    cTkFixedArray<cGcStoryPageSeenDataArray, 8> maSeenStories;
    cTkFixedArray<cGcWonderRecord, 11> maWonderPlanetRecords;
    cTkFixedArray<cGcWonderRecord, 15> maWonderCreatureRecords;
    cTkFixedArray<cGcWonderRecord, 8> maWonderFloraRecords;
    cTkFixedArray<cGcWonderRecord, 8> maWonderMineralRecords;
    cTkFixedArray<cGcWonderRecord, 13> maWonderTreasureRecords;
    cTkFixedArray<cGcWonderRecord, 11> maWonderWeirdBasePartRecords;
    cTkFixedArray<cGcWonderRecord, 12> maWonderCustomRecords;
    cTkFixedArray<cGcWonderRecordCustomData, 12> maWonderCustomRecordsExtraData;
    cTkFixedArray<cGcSyncBufferSaveDataArray, 4> maSyncBuffersData;
    cTkDynamicArray<cGcMaintenanceSaveKey> maRefinerBufferKeys;
    cTkDynamicArray<cGcMaintenanceContainer> maRefinerBufferData;

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
