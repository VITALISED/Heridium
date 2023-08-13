#pragma once
#include "pch.h"

enum eBuildingClass
{
    EBuildingClass_None = 0,
    EBuildingClass_TerrainResource = 1,
    EBuildingClass_Shelter = 2,
    EBuildingClass_Abandoned = 3,
    EBuildingClass_Terminal = 4,
    EBuildingClass_Shop = 5,
    EBuildingClass_Outpost = 6,
    EBuildingClass_Waypoint = 7,
    EBuildingClass_Beacon = 8,
    EBuildingClass_RadioTower = 9,
    EBuildingClass_Observatory = 10,
    EBuildingClass_Depot = 11,
    EBuildingClass_Factory = 12,
    EBuildingClass_Harvester = 13,
    EBuildingClass_Plaque = 14,
    EBuildingClass_Monolith = 15,
    EBuildingClass_Portal = 16,
    EBuildingClass_Ruin = 17,
    EBuildingClass_Debris = 18,
    EBuildingClass_DamagedMachine = 19,
    EBuildingClass_DistressSignal = 20,
    EBuildingClass_LandingPad = 21,
    EBuildingClass_Base = 22,
    EBuildingClass_MissionTower = 23,
    EBuildingClass_CrashedFreighter = 24,
    EBuildingClass_GraveInCave = 25,
    EBuildingClass_StoryGlitch = 26,
    EBuildingClass_TreasureRuins = 27,
    EBuildingClass_GameStartSpawn = 28,
    EBuildingClass_WaterCrashedFreighter = 29,
    EBuildingClass_WaterTreasureRuins = 30,
    EBuildingClass_WaterAbandoned = 31,
    EBuildingClass_WaterDistressSignal = 32,
    EBuildingClass_NPCDistressSignal = 33,
    EBuildingClass_NPCDebris = 34,
    EBuildingClass_LargeBuilding = 35,
    EBuildingClass_Settlement_Hub = 36,
    EBuildingClass_Settlement_LandingZone = 37,
    EBuildingClass_Settlement_Bar = 38,
    EBuildingClass_Settlement_Tower = 39,
    EBuildingClass_Settlement_Market = 40,
    EBuildingClass_Settlement_Small = 41,
    EBuildingClass_Settlement_SmallIndustrial = 42,
    EBuildingClass_Settlement_Medium = 43,
    EBuildingClass_Settlement_Large = 44,
    EBuildingClass_Settlement_Monument = 45,
    EBuildingClass_Settlement_SheriffsOffice = 46,
    EBuildingClass_Settlement_Double = 47,
    EBuildingClass_Settlement_Farm = 48,
    EBuildingClass_Settlement_Factory = 49,
    EBuildingClass_Settlement_Clump = 50,
    EBuildingClass_DroneHive = 51,
};

class cGcBuildingClassification
{
public:
    static const unsigned __int64 muNameHash = 0x51606DB6648C8792;
    static const unsigned __int64 muTemplateHash = 0xAAD9E73CDB8A4C0E;
    static const int miNumMembers = 1;

    eBuildingClass meBuildingClass;

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
