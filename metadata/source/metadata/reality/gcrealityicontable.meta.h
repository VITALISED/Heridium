#pragma once

#include "../../../../../../pch.h"
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;

class cGcRealityIconTable
{
    static const unsigned __int64 muNameHash = 3037748862545536204;
    static const unsigned __int64 muTemplateHash = 7602006607907659219;
    static const int miNumMembers = 21;

    cTkFixedArray<cTkTextureResource> maHazardIcons;
    cTkFixedArray<cTkTextureResource> maHazardIconsHUD;
    cTkFixedArray<cTkTextureResource> maSubstanceCategoryIcons;
    cTkFixedArray<cTkTextureResource> maProductCategoryIcons;
    cTkFixedArray<cTkTextureResource> maMissionFactionIcons;
    cTkFixedArray<cTkTextureResource> maBinocularDiscoveryIcons;
    cTkFixedArray<cTkTextureResource> maDiscoveryPageTradingIcons;
    cTkFixedArray<cTkTextureResource> maDiscoveryPageConflictIcons;
    cTkFixedArray<cTkTextureResource> maDiscoveryPageRaceIcons;
    cTkTextureResource mDiscoveryPageTradingUnknown;
    cTkTextureResource mDiscoveryPageConflictUnknown;
    cTkTextureResource mDiscoveryPageRaceUnknown;
    cTkDynamicArray<cGcPlanetResourceIconLookup> maTerrainIconLookups;
    cTkDynamicArray<cGcPlanetResourceIconLookup> maPlanetResourceIconLookups;
    cTkDynamicArray<cTkTextureResource> maRepairTechIcons;
    cTkFixedArray<cTkTextureResource> maGameIcons;
    cTkDynamicArray<cGcRealityIcon> maMissionDetailIcons;
    cTkFixedArray<cTkTextureResource> maDifficultyPresetIcons;
    cTkFixedArray<cTkTextureResource> maDifficultyUIOptionIcons;
    cTkFixedArray<cTkTextureResource> maOptionsUIHeaderIcons;
    cTkFixedArray<cTkTextureResource> maInventoryFilterIcons;

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
