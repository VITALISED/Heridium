#pragma once
#include "../../../../pch.h"

enum eGameIcons
{
    EGameIcons_Stamina = 0,
    EGameIcons_NoStamina = 1,
    EGameIcons_EnergyCharge = 2,
    EGameIcons_Scanner = 3,
    EGameIcons_NoScanner = 4,
    EGameIcons_Grave = 5,
    EGameIcons_Resources = 6,
    EGameIcons_Inventory = 7,
    EGameIcons_InventoryFull = 8,
    EGameIcons_RareItems = 9,
    EGameIcons_Pirates = 10,
    EGameIcons_PirateScan = 11,
    EGameIcons_Drone = 12,
    EGameIcons_Quad = 13,
    EGameIcons_Mech = 14,
    EGameIcons_Walker = 15,
    EGameIcons_DroneOff = 16,
    EGameIcons_Police = 17,
    EGameIcons_AtlasStation = 18,
    EGameIcons_BlackHole = 19,
    EGameIcons_SaveGame = 20,
    EGameIcons_SaveInventory = 21,
    EGameIcons_Jetpack = 22,
    EGameIcons_JetpackEmpty = 23,
    EGameIcons_VehicleBoost = 24,
    EGameIcons_VehicleBoostRecharge = 25,
    EGameIcons_Fuel = 26,
    EGameIcons_GekStanding = 27,
    EGameIcons_VykeenStanding = 28,
    EGameIcons_KorvaxStanding = 29,
    EGameIcons_GekDiamondStanding = 30,
    EGameIcons_VykeenDiamondStanding = 31,
    EGameIcons_KorvaxDiamondStanding = 32,
    EGameIcons_TradeGuildStanding = 33,
    EGameIcons_WarGuildStanding = 34,
    EGameIcons_ExplorationGuildStanding = 35,
    EGameIcons_TradeGuildDiamondStanding = 36,
    EGameIcons_WarGuildDiamondStanding = 37,
    EGameIcons_ExplorationGuildDiamondStanding = 38,
    EGameIcons_GMPathToCentre = 39,
    EGameIcons_GMAtlas = 40,
    EGameIcons_GMBlackHole = 41,
    EGameIcons_GMUserWaypoint = 42,
    EGameIcons_GMUserMission = 43,
    EGameIcons_GMSeasonal = 44,
    EGameIcons_TransferPersonal = 45,
    EGameIcons_TransferPersonalCargo = 46,
    EGameIcons_TransferShip = 47,
    EGameIcons_TransferBike = 48,
    EGameIcons_TransferBuggy = 49,
    EGameIcons_TransferTruck = 50,
    EGameIcons_TransferWheeledBike = 51,
    EGameIcons_TransferHovercraft = 52,
    EGameIcons_TransferSubmarine = 53,
    EGameIcons_TransferMech = 54,
    EGameIcons_TransferFreighter = 55,
    EGameIcons_TransferBase = 56,
    EGameIcons_HazardIndicatorHot = 57,
    EGameIcons_HazardIndicatorCold = 58,
    EGameIcons_HazardIndicatorRadiation = 59,
    EGameIcons_HazardIndicatorToxic = 60,
    EGameIcons_TerrainAdd = 61,
    EGameIcons_TerrainRemove = 62,
    EGameIcons_TerrainFlatten = 63,
    EGameIcons_TerrainUndo = 64,
    EGameIcons_SpacePhone = 65,
    EGameIcons_GarageMarkerBuggy = 66,
    EGameIcons_GarageMarkerBike = 67,
    EGameIcons_GarageMarkerTruck = 68,
    EGameIcons_GarageMarkerWheeledBike = 69,
    EGameIcons_GarageMarkerHovercraft = 70,
    EGameIcons_CorruptedDrone = 71,
    EGameIcons_HandHold = 72,
    EGameIcons_ShipThumbnailBG = 73,
    EGameIcons_CClass = 74,
    EGameIcons_BClass = 75,
    EGameIcons_AClass = 76,
    EGameIcons_SClass = 77,
    EGameIcons_NoSaveWarning = 78,
    EGameIcons_ExploreMissionPlanetIcon = 79,
    EGameIcons_ExploreMissionSystemIcon = 80,
    EGameIcons_PetThumbnailBG = 81,
    EGameIcons_SettlementOSD = 82,
    EGameIcons_Stealth = 83,
    EGameIcons_StealthEmpty = 84,
    EGameIcons_DefenceForce = 85,
};

class cGcRealityGameIcons
{
public:
    static const unsigned __int64 muNameHash = 0x878911013D83AEE9;
    static const unsigned __int64 muTemplateHash = 0xEFFA7BD969859911;
    static const int miNumMembers = 1;

    eGameIcons meGameIcons;

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
