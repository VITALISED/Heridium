#pragma once

#include "../../../../../../../../pch.h"
class cGcGalaxyStarTypes;
class cGcPlanetClass;
class cGcPlanetSize;
class cGcCreatureRoleDataTable;
class cGcTerrainControls;
class cGcBiomeType;
class cGcBiomeSubType;

class cGcPlanetGenerationIntermediateData
{
    static const unsigned __int64 muNameHash = 1614962697046088862;
    static const unsigned __int64 muTemplateHash = 1249892713538262970;
    static const int miNumMembers = 19;

    cTkSeed mSeed;
    int miTerrainSettingIndex;
    cGcGalaxyStarTypes mStarType;
    cGcPlanetClass mClass;
    cGcPlanetSize mSize;
    cGcCreatureRoleDataTable mCreatureRoles;
    cGcTerrainControls mTerrain;
    cGcBiomeType mBiome;
    cGcBiomeSubType mBiomeSubType;
    cTkFixedString<128,char> macTerrainFile;
    cTkFixedString<128,char> macCreatureLandFile;
    cTkFixedString<128,char> macCreatureCaveFile;
    cTkFixedString<128,char> macCreatureWaterFile;
    cTkFixedString<128,char> macCreatureExtraWaterFile;
    cTkFixedString<128,char> macCreatureAirFile;
    cTkFixedString<128,char> macCreatureRobotFile;
    cTkDynamicArray<cGcExternalObjectListOptions> maExternalObjectLists;
    cTkDynamicArray<int> maExternalObjectListIndices;
    bool mbPrime;

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
