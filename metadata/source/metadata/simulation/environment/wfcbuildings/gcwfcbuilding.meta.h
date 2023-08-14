#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcmoduleoverride.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcminimumuseconstraint.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcweightedresource.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcweightedbuildingsize.meta.h"
#include "../../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingpartstyle.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcfreighterbaseroom.meta.h"

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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
