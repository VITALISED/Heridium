#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcgamemode.meta.h"
#include "../../../../metadata/source/metadata/user/gcdifficultypresettype.meta.h"
#include "../../../../metadata/source/metadata/user/gcdifficultysettingsdata.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/simulation/gcspaceshipclasses.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../metadata/source/metadata/simulation/environment/gcbuildingclassification.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventorylayout.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventorycontainer.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcseasonpetconstraints.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcpetdata.meta.h"
#include "../../../../metadata/source/metadata/simulation/ecosystem/gcsandwormtimerandfrequencyoverride.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcseasonalstage.meta.h"
#include "../../../../metadata/source/metadata/simulation/gcscaneventtable.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcpersistedstatdata.meta.h"
#include "../../../../metadata/source/metadata/reality/gctechnology.meta.h"
#include "../../../../metadata/source/metadata/reality/gcproductdata.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrealitysubstancedata.meta.h"
#include "../../../../metadata/source/metadata/reality/gctradedata.meta.h"

class cGcSeasonalGameModeData
{
public:
    static const unsigned __int64 muNameHash = 0xFD6B0BE30E218605;
    static const unsigned __int64 muTemplateHash = 0xA4C94919ED47AAA7;
    static const int miNumMembers = 88;

    int miSeasonId;
    unsigned __int64 mui64StartTimeUTC;
    unsigned __int64 mui64EndTimeUTC;
    unsigned __int64 mui64Hash;
    cTkFixedString<32,char> macTitle;
    cTkFixedString<32,char> macSubtitle;
    cTkFixedString<32,char> macDescription;
    TkID<256> mFinalStageTitle;
    TkID<256> mMilestoneWithStageLocId;
    cGcGameMode mGameMode;
    cGcDifficultyPresetType mDifficultySettingPreset;
    cGcDifficultySettingsData mDifficultyMinimums;
    cTkFixedString<32,char> macSeasonalUAOverride;
    unsigned __int64 mui64UAOverrideValue;
    TkID<128> mFinalReward;
    TkID<128> mFinalRewardSwitchAlt;
    TkID<256> mFinalCantRewardMessage;
    cTkFixedString<512,char> macFinalRewardDescription;
    cTkTextureResource mMainIcon;
    int miSeasonNumber;
    int miRemixNumber;
    int miDisplayNumber;
    TkID<256> mSeasonName;
    TkID<256> mSeasonNameUpper;
    TkID<256> mMainMissionTitle;
    TkID<256> mMainMissionMessage;
    bool mbDoCommunityMissionTextSubstitutions;
    bool mbDefaultToPvPOff;
    bool mbMustCraftInBases;
    cTkDynamicArray<TkID<128> > maAdditionalTradeProducts;
    cTkDynamicArray<TkID<128> > maNeverTradeProducts;
    int miStartingSuitSlots;
    int miStartingSuitTechSlots;
    int miStartingSuitCargoSlots;
    cTkSeed mWeaponSeed;
    cTkSeed mShipSeed;
    cGcSpaceshipClasses mShipType;
    bool mbStartWithFreighter;
    cTkFixedString<128,char> macFreighterBaseOverrideFilename;
    cGcAlienRace mFreighterRace;
    bool mbStartAboardFreighter;
    bool mbForceStartSystemTernary;
    bool mbForceStartSystemAbandoned;
    cTkDynamicArray<cGcBuildingClassification> maValidSpawnBuildings;
    cGcInventoryLayout mWeaponInventoryLayout;
    cGcInventoryLayout mShipInventoryLayout;
    cGcInventoryLayout mShipTechInventoryLayout;
    bool mbUseDefaultAppearance;
    cGcInventoryContainer mInventory;
    cGcInventoryContainer mInventory_TechOnly;
    cGcInventoryContainer mInventory_Cargo;
    cGcInventoryContainer mShipInventory;
    cGcInventoryContainer mWeaponInventory;
    bool mbUseRandomPet;
    cTkDynamicArray<cGcSeasonPetConstraints> maRandomPetConstraints;
    cTkFixedArray<cGcPetData, 18> maSpecificPets;
    cTkDynamicArray<cGcSandwormTimerAndFrequencyOverride> maSandwormOverrides;
    bool mbSandwormGlobalOverride;
    float mfSandwormGlobalOverrideTimer;
    float mfSandwormGlobalOverrideSpawnChance;
    bool mbStartNextToShip;
    float mfDistanceFromShipAtStartOfGame;
    bool mbShipStartsDamaged;
    bool mbAllowMissionDetailMessages;
    bool mbUseStartPlanetObjectListOverrides;
    TkID<128> mStartPlanetRareSubstanceOverride;
    bool mbTrashInventoryOnGalaxyTravel;
    int miFreighterBattleEarlyWarpsOverride;
    bool mbForceDeepSpaceAmbientFrigatesOnInfested;
    int miTechCostMultiplier;
    cTkDynamicArray<TkID<128> > maNeverLearnableTech;
    cTkDynamicArray<TkID<128> > maForgottenProducts;
    bool mbIncreaseXClassTechOddsWithCommTier;
    float mfAbandonedFreighterHazardProtectionMul;
    float mfHazardProtectionDrainMultiplier;
    float mfEnergyDrainMultiplier;
    int miQuestSubstanceReducer;
    cTkDynamicArray<cGcSeasonalStage> maStages;
    cGcScanEventTable mScanEventTable;
    bool mbResetSaveOnDeath;
    cTkDynamicArray<cGcPersistedStatData> maStatsToPersistOnReset;
    bool mbCompatibleWithState;
    bool mbHasBeenConverted;
    cTkDynamicArray<cGcTechnology> maTechnologyTable;
    cTkDynamicArray<cGcProductData> maProductTable;
    cTkDynamicArray<cGcRealitySubstanceData> maSubstanceTable;
    cGcTradeData mSeasonalUAStationTradeData;
    bool mbUseSeasonalUAStationTradeData;

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
