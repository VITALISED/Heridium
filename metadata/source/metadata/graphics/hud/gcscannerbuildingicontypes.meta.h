#pragma once
#include "../../../../../pch.h"

enum eScanBuildingIconType
{
    EScanBuildingIconType_None = 0,
    EScanBuildingIconType_Generic = 1,
    EScanBuildingIconType_Shelter = 2,
    EScanBuildingIconType_Relic = 3,
    EScanBuildingIconType_Factory = 4,
    EScanBuildingIconType_Unknown = 5,
    EScanBuildingIconType_Distress = 6,
    EScanBuildingIconType_Beacon = 7,
    EScanBuildingIconType_Waypoint = 8,
    EScanBuildingIconType_SpaceStation = 9,
    EScanBuildingIconType_TechResource = 10,
    EScanBuildingIconType_FuelResource = 11,
    EScanBuildingIconType_MineralResource = 12,
    EScanBuildingIconType_SpaceAnomaly = 13,
    EScanBuildingIconType_SpaceAtlas = 14,
    EScanBuildingIconType_ExternalBase = 15,
    EScanBuildingIconType_PlanetBaseTerminal = 16,
    EScanBuildingIconType_Nexus = 17,
    EScanBuildingIconType_AbandonedFreighter = 18,
    EScanBuildingIconType_Telescope = 19,
    EScanBuildingIconType_Outpost = 20,
    EScanBuildingIconType_UpgradePod = 21,
    EScanBuildingIconType_Cog = 22,
    EScanBuildingIconType_Ruins = 23,
    EScanBuildingIconType_Portal = 24,
    EScanBuildingIconType_Library = 25,
    EScanBuildingIconType_Abandoned = 26,
    EScanBuildingIconType_SmallBuilding = 27,
    EScanBuildingIconType_StoryGlitch = 28,
    EScanBuildingIconType_GraveInCave = 29,
    EScanBuildingIconType_HoloHub = 30,
    EScanBuildingIconType_Settlement = 31,
    EScanBuildingIconType_DroneHive = 32,
};

class cGcScannerBuildingIconTypes
{
public:
    static const unsigned __int64 muNameHash = 0x894C8A7A0498F6C5;
    static const unsigned __int64 muTemplateHash = 0xC6F0D71CBBA16147;
    static const int miNumMembers = 1;

    eScanBuildingIconType meScanBuildingIconType;

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
