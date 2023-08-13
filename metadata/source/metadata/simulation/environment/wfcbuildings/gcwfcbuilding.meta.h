#pragma once

#include "../../../../../../../../pch.h"
class cGcBaseBuildingPartStyle;

class cGcWFCBuilding
{
    static const unsigned __int64 muNameHash = 4811613435599932228;
    static const unsigned __int64 muTemplateHash = 17289429525155777208;
    static const int miNumMembers = 19;

    cTkFixedString<32,char> macName;
    cTkFixedString<128,char> macModuleSet;
    cTkFixedArray<cTkFixedString<128,char> > maDecoration;
    bool mbImprovedCoherence;
    bool mbRequireNoUnreachableRooms;
    float mfInitialUnlockProbability;
    bool mbDontSpawnNearPlayerBases;
    bool mbRemoveUnreachableBlocks;
    cTkDynamicArray<TkID<128> > maGroupsEnabled;
    cTkDynamicArray<cGcModuleOverride> maModuleOverrides;
    cTkDynamicArray<cGcMinimumUseConstraint> maMinimumUseConstraints;
    cTkDynamicArray<TkID<128> > maNPCs;
    cTkDynamicArray<cGcWeightedResource> maLayouts;
    cTkDynamicArray<cGcWeightedBuildingSize> maSizes;
    cTkDynamicArray<__int64> maFallbackSeeds;
    cTkDynamicArray<__int64> maPresetFallbackSeeds;
    int miNumberOfPresetsPerPlanet;
    cGcBaseBuildingPartStyle mReplaceMaterials;
    cTkDynamicArray<cGcFreighterBaseRoom> maRooms;

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
