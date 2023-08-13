#pragma once
#include "../../../../../../../pch.h"

enum eTerrainSettings
{
    ETerrainSettings_FloatingIslands = 0,
    ETerrainSettings_GrandCanyon = 1,
    ETerrainSettings_MountainRavines = 2,
    ETerrainSettings_HugeArches = 3,
    ETerrainSettings_Alien = 4,
    ETerrainSettings_Craters = 5,
    ETerrainSettings_Caverns = 6,
    ETerrainSettings_Alpine = 7,
    ETerrainSettings_LilyPad = 8,
    ETerrainSettings_Desert = 9,
    ETerrainSettings_WaterworldPrime = 10,
    ETerrainSettings_FloatingIslandsPrime = 11,
    ETerrainSettings_GrandCanyonPrime = 12,
    ETerrainSettings_MountainRavinesPrime = 13,
    ETerrainSettings_HugeArchesPrime = 14,
    ETerrainSettings_AlienPrime = 15,
    ETerrainSettings_CratersPrime = 16,
    ETerrainSettings_CavernsPrime = 17,
    ETerrainSettings_AlpinePrime = 18,
    ETerrainSettings_LilyPadPrime = 19,
    ETerrainSettings_DesertPrime = 20,
};

class cTkVoxelGeneratorSettingsTypes
{
    static const unsigned __int64 muNameHash = 0x60B0A451EF1759F9;
    static const unsigned __int64 muTemplateHash = 0x89AB0100FEC886B9;
    static const int miNumMembers = 1;

    eTerrainSettings meTerrainSettings;

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
