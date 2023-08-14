#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcminingsubstancedata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetwaterdata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gcexternalobjectlistoptions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcweatherweightings.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiomecloudsettings.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcterraincontrols.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcscreenfilteroption.meta.h"

class cGcBiomeData
{
public:
    static const unsigned __int64 muNameHash = 0x2FD5560612237D4D;
    static const unsigned __int64 muTemplateHash = 0xA369C87DCDDF335B;
    static const int miNumMembers = 17;

    cTkFixedString<128,char> macTextureFile;
    cTkFixedString<128,char> macOverlayFile;
    cTkFixedString<128,char> macTileTypesFile;
    cTkFixedString<128,char> macColourPaletteFile;
    cTkFixedString<128,char> macLegacyColourPaletteFile;
    cGcMiningSubstanceData mMiningSubstance1;
    cGcMiningSubstanceData mMiningSubstance2;
    cGcMiningSubstanceData mMiningSubstance3;
    float mfFuelMultiplier;
    cGcPlanetWaterData mWater;
    cTkDynamicArray<cGcExternalObjectListOptions> maExternalObjectLists;
    cTkFixedArray<cGcWeatherWeightings, 4> maWeatherOptions;
    cTkVector2 mWeatherChangeTime;
    cGcBiomeCloudSettings mCloudSettings;
    cGcTerrainControls mTerrain;
    cTkDynamicArray<cGcScreenFilterOption> maFilterOptions;
    TkID<256> mFloraLifeLocID;

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
