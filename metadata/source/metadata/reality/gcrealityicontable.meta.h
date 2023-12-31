#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/reality/gcplanetresourceiconlookup.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrealityicon.meta.h"

class cGcRealityIconTable
{
public:
    static const unsigned __int64 muNameHash = 0x2A28407EECDFA4CC;
    static const unsigned __int64 muTemplateHash = 0x697FC0BB94821DD3;
    static const int miNumMembers = 21;

    cTkFixedArray<cTkTextureResource, 6> maHazardIcons;
    cTkFixedArray<cTkTextureResource, 6> maHazardIconsHUD;
    cTkFixedArray<cTkTextureResource, 9> maSubstanceCategoryIcons;
    cTkFixedArray<cTkTextureResource, 9> maProductCategoryIcons;
    cTkFixedArray<cTkTextureResource, 9> maMissionFactionIcons;
    cTkFixedArray<cTkTextureResource, 17> maBinocularDiscoveryIcons;
    cTkFixedArray<cTkTextureResource, 7> maDiscoveryPageTradingIcons;
    cTkFixedArray<cTkTextureResource, 4> maDiscoveryPageConflictIcons;
    cTkFixedArray<cTkTextureResource, 8> maDiscoveryPageRaceIcons;
    cTkTextureResource mDiscoveryPageTradingUnknown;
    cTkTextureResource mDiscoveryPageConflictUnknown;
    cTkTextureResource mDiscoveryPageRaceUnknown;
    cTkDynamicArray<cGcPlanetResourceIconLookup> maTerrainIconLookups;
    cTkDynamicArray<cGcPlanetResourceIconLookup> maPlanetResourceIconLookups;
    cTkDynamicArray<cTkTextureResource> maRepairTechIcons;
    cTkFixedArray<cTkTextureResource, 86> maGameIcons;
    cTkDynamicArray<cGcRealityIcon> maMissionDetailIcons;
    cTkFixedArray<cTkTextureResource, 7> maDifficultyPresetIcons;
    cTkFixedArray<cTkTextureResource, 4> maDifficultyUIOptionIcons;
    cTkFixedArray<cTkTextureResource, 5> maOptionsUIHeaderIcons;
    cTkFixedArray<cTkTextureResource, 5> maInventoryFilterIcons;

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
