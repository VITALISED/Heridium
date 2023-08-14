#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/galaxy/gcgalaxystartypes.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetclass.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetsize.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/gccreatureroledatatable.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcterraincontrols.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiomesubtype.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gcexternalobjectlistoptions.meta.h"

class cGcPlanetGenerationIntermediateData
{
public:
    static const unsigned __int64 muNameHash = 0x166980043AF05C9E;
    static const unsigned __int64 muTemplateHash = 0x115882CCFDCC17BA;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
