#pragma once
#include "pch.h"

class cGcBaseBuildingPartStyle;

class cGcWFCBuilding
{
public:
    static const unsigned __int64 muNameHash = 0x42C648ED396E4B44;
    static const unsigned __int64 muTemplateHash = 0xEFF0648CC00F8AB8;
    static const int miNumMembers = 19;

    cTkFixedString<32,char> macName;
    cTkFixedString<128,char> macModuleSet;
    cTkFixedArray<cTkFixedString<128,char>, 2> maDecoration;
    bool mbImprovedCoherence;
    bool mbRequireNoUnreachableRooms;
    float mfInitialUnlockProbability;
    bool mbDontSpawnNearPlayerBases;
    bool mbRemoveUnreachableBlocks;
    cTkDynamicArray<TkID<128>1> maGroupsEnabled;
    cTkDynamicArray<cGcModuleOverride1> maModuleOverrides;
    cTkDynamicArray<cGcMinimumUseConstraint1> maMinimumUseConstraints;
    cTkDynamicArray<TkID<128>1> maNPCs;
    cTkDynamicArray<cGcWeightedResource1> maLayouts;
    cTkDynamicArray<cGcWeightedBuildingSize1> maSizes;
    cTkDynamicArray<__int641> maFallbackSeeds;
    cTkDynamicArray<__int641> maPresetFallbackSeeds;
    int miNumberOfPresetsPerPlanet;
    cGcBaseBuildingPartStyle mReplaceMaterials;
    cTkDynamicArray<cGcFreighterBaseRoom1> maRooms;

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
