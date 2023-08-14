#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcdiscoveryworth.meta.h"
#include "../../../../metadata/source/metadata/reality/gcsubstancesecondarylookup.meta.h"
#include "../../../../metadata/source/metadata/reality/gcsubstancesecondarybiome.meta.h"
#include "../../../../metadata/toolkit/metadata/tkrawid.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienpuzzletableindex.meta.h"
#include "../../../../metadata/toolkit/metadata/animation/tkcurvetype.meta.h"
#include "../../../../metadata/source/metadata/simulation/projectiles/gcdamagemultiplierlookup.meta.h"
#include "../../../../metadata/source/metadata/reality/gcfreightercargooption.meta.h"
#include "../../../../metadata/source/metadata/simulation/weapons/gcshipweapondata.meta.h"
#include "../../../../metadata/source/metadata/simulation/weapons/gcplayerweapondata.meta.h"
#include "../../../../metadata/toolkit/metadata/tkidarray.meta.h"
#include "../../../../metadata/source/metadata/reality/gcnumberedtextlist.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrealityicontable.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/reality/gcstats.meta.h"
#include "../../../../metadata/source/metadata/reality/gctechlist.meta.h"
#include "../../../../metadata/source/metadata/reality/gctradesettings.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventorylayout.meta.h"
#include "../../../../metadata/source/metadata/gameplay/gcfiendcrimespawntable.meta.h"
#include "../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcidpair.meta.h"

class cGcRealityManagerData
{
public:
    static const unsigned __int64 muNameHash = 0x5930542B7B565329;
    static const unsigned __int64 muTemplateHash = 0xD01E8D3C598026F4;
    static const int miNumMembers = 80;

    unsigned __int16 muiHomeRealityIteration;
    unsigned __int16 muiRealityIteration;
    cTkFixedArray<cGcDiscoveryWorth, 17> maDiscoveryWorth;
    cTkFixedArray<float, 4> maCreatureDiscoverySizeMultiplier;
    cTkDynamicArray<cGcSubstanceSecondaryLookup> maSubstanceSecondaryLookups;
    cGcSubstanceSecondaryBiome mSubstanceSecondaryBiome;
    cTkFixedString<128,char> macTechnologyTable;
    cTkFixedString<128,char> macSubstanceTable;
    cTkFixedString<128,char> macProductTable;
    cTkFixedString<128,char> macProceduralProductTable;
    cTkFixedString<128,char> macProceduralTechnologyTable;
    cTkFixedString<128,char> macLegacyItemConversionTable;
    cTkDynamicArray<cTkRawID> maLegacyRepairTable;
    cTkFixedString<128,char> macConsumableItemTable;
    cTkFixedString<128,char> macRecipeTable;
    cTkFixedString<128,char> macStoriesTable;
    cTkFixedString<128,char> macDialogClearanceTable;
    cTkFixedString<128,char> macAlienWordsTable;
    cTkDynamicArray<cTkFixedString<128,char> > maAlienPuzzleTables;
    cTkFixedArray<bool, 131> maLoopInteractionPuzzles;
    cTkFixedArray<cGcAlienPuzzleTableIndex, 131> maInteractionPuzzlesIndexTypes;
    cTkFixedArray<cTkCurveType, 7> maWeightingCurves;
    cTkDynamicArray<cGcDamageMultiplierLookup> maDamageMultiplierTable;
    cTkFixedString<128,char> macRewardTable;
    cTkFixedString<128,char> macDiscoveryRewardTable;
    cTkFixedString<128,char> macInventoryTable;
    cTkFixedString<128,char> macDamageTable;
    cTkFixedString<128,char> macPurchaseableBuildingBlueprintsTable;
    cTkFixedString<128,char> macPurchaseableSpecialsTable;
    cTkFixedString<128,char> macUnlockableSeasonRewardsTable;
    cTkFixedString<128,char> macUnlockableTwitchRewardsTable;
    cTkFixedString<128,char> macUnlockablePlatformRewardsTable;
    cTkFixedString<128,char> macCostTable;
    cTkFixedString<128,char> macTradingCostTable;
    cTkFixedString<128,char> macTradingClassDataTable;
    cTkFixedString<128,char> macMaintenanceGroupsTable;
    cTkFixedString<128,char> macUnlockableItemTrees;
    cTkFixedString<128,char> macSettlementPerksTable;
    cTkFixedString<128,char> macPlayerWeaponPropertiesTable;
    cTkFixedString<128,char> macCombatEffectsTable;
    cTkFixedString<128,char> macTechBoxTable;
    cTkDynamicArray<cGcFreighterCargoOption> maFreighterCargoOptions;
    cTkFixedArray<cGcShipWeaponData, 7> maShipWeapons;
    cTkFixedArray<cGcPlayerWeaponData, 19> maPlayerWeapons;
    cTkFixedArray<cTkIdArray, 7> maDefaultVehicleLoadout;
    cTkFixedArray<TkID<128>, 9> maFactionStandingIDs;
    cTkFixedArray<TkID<256>, 9> maFactionNames;
    cTkFixedArray<cGcNumberedTextList, 9> maFactionClients;
    cTkFixedArray<cGcNumberedTextList, 11> maMissionNameFormats;
    cTkFixedArray<cGcNumberedTextList, 11> maMissionNameAdjectives;
    cTkFixedArray<cGcNumberedTextList, 11> maMissionNameNouns;
    cTkFixedArray<cTkIdArray, 11> maMissionBoardRewardOptions;
    cTkFixedArray<float, 3> maWeightedTextWeights;
    cGcRealityIconTable mIcons;
    cTkFixedArray<cTkColour, 6> maHazardColours;
    cTkFixedArray<cTkColour, 3> maRarityColours;
    cTkFixedArray<cTkColour, 9> maSubstanceCategoryColours;
    cTkFixedArray<cTkTextureResource, 9> maSubstanceChargeIcons;
    cTkFixedArray<cTkTextureResource, 189> maStatCategoryIcons;
    cTkFixedArray<cTkTextureResource, 189> maStatTechPackageIcons;
    cTkFixedArray<cGcStats, 5> maStats;
    cGcTechList mStationTechShops;
    cTkFixedArray<cGcTechList, 16> maPlanetTechShops;
    cGcTradeSettings mTradeSettings;
    cTkDynamicArray<TkID<128> > maPirateStationExtraProds;
    cGcInventoryLayout mSuitStartingSlotLayout;
    cGcInventoryLayout mSuitTechOnlyStartingSlotLayout;
    cGcInventoryLayout mSuitCargoStartingSlotLayout;
    cGcInventoryLayout mShipStartingLayout;
    cGcInventoryLayout mShipTechOnlyStartingLayout;
    cGcInventoryLayout mShipCargoOnlyStartingLayout;
    cTkDynamicArray<int> maSuitUpgradePrices;
    cTkDynamicArray<int> maSuitTechOnlyUpgradePrices;
    cTkDynamicArray<int> maSuitCargoUpgradePrices;
    cTkDynamicArray<TkID<128> > maNeverSellableItems;
    cTkDynamicArray<TkID<128> > maNeverOfferedForSale;
    cTkFixedArray<float, 5> maNormalisedPriceLimits;
    cTkDynamicArray<cGcFiendCrimeSpawnTable> maFiendCrimeSpawnTable;
    cTkDynamicArray<cGcIDPair> maFreighterBaseItemPairs;
    cTkFixedArray<cTkFixedString<128,char>, 5> maCatalogues;

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
