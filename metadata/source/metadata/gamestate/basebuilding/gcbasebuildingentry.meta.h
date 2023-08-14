#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingpartstyle.meta.h"
#include "../../../../../metadata/toolkit/metadata/tkmodelresource.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingobjectdecorationtypes.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingentrygroup.meta.h"

enum eBaseTerrainEditShape
{
    EBaseTerrainEditShape_Cube = 0,
    EBaseTerrainEditShape_Cylinder = 1,
};
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbaselinkgriddata.meta.h"

class cGcBaseBuildingEntry
{
public:
    static const unsigned __int64 muNameHash = 0xA6F7B710166F6076;
    static const unsigned __int64 muTemplateHash = 0x2E18738D74B90B8C;
    static const int miNumMembers = 50;

    TkID<128> mID;
    bool mbIsTemporary;
    bool mbIsFromModFolder;
    cGcBaseBuildingPartStyle mStyle;
    cTkModelResource mPlacementScene;
    cGcBaseBuildingObjectDecorationTypes mDecorationType;
    bool mbIsPlaceable;
    bool mbIsDecoration;
    cGcBiomeType mBiome;
    bool mbBuildableOnPlanetBase;
    bool mbBuildableOnSpaceBase;
    bool mbBuildableOnFreighter;
    bool mbBuildableOnPlanet;
    bool mbBuildableOnPlanetWithProduct;
    bool mbBuildableUnderwater;
    bool mbBuildableAboveWater;
    int miPlanetLimit;
    int miRegionLimit;
    int miPlanetBaseLimit;
    int miFreighterBaseLimit;
    bool mbCheckPlaceholderCollision;
    bool mbCheckPlayerCollision;
    bool mbCanRotate3D;
    bool mbCanScale;
    cTkDynamicArray<cGcBaseBuildingEntryGroup> maGroups;
    int miStorageContainerIndex;
    TkID<256> mColourPaletteGroupId;
    TkID<256> mDefaultColourPaletteId;
    TkID<256> mMaterialGroupId;
    TkID<256> mDefaultMaterialId;
    bool mbCanChangeColour;
    bool mbCanChangeMaterial;
    bool mbCanPickUp;
    bool mbShowInBuildMenu;
    cTkDynamicArray<TkID<128> > maCompositePartObjectIDs;
    cTkDynamicArray<TkID<128> > maFamilyIDs;
    float mfBuildEffectAccelerator;
    bool mbRemovesAttachedDecoration;
    bool mbRemovesWhenUnsnapped;
    bool mbEditsTerrain;
    eBaseTerrainEditShape meBaseTerrainEditShape;
    float mfMinimumDeleteDistance;
    bool mbIsSealed;
    bool mbCloseMenuAfterBuild;
    cGcBaseLinkGridData mLinkGridData;
    int miGhostsCountOverride;
    bool mbShowGhosts;
    float mfSnappingDistanceOverride;
    int miRegionSpawnLOD;
    cTkModelResource mNPCInteractionScene;

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
