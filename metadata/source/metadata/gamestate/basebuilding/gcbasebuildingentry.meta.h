#pragma once

#include "../../../../../../../pch.h"
class cGcBaseBuildingPartStyle;
class cTkModelResource;
class cGcBaseBuildingObjectDecorationTypes;
class cGcBiomeType;

enum eBaseTerrainEditShape
{
    EBaseTerrainEditShape_Cube = 0,
    EBaseTerrainEditShape_Cylinder = 1,
};
class cGcBaseLinkGridData;
class cTkModelResource;

class cGcBaseBuildingEntry
{
    static const unsigned __int64 muNameHash = 12031286209267327094;
    static const unsigned __int64 muTemplateHash = 3321531776571607948;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
