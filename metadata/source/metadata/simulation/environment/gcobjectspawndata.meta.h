#pragma once
#include "../../../../../pch.h"

enum eType
{
    EType_Instanced = 0,
    EType_Single = 1,
};
#include "../../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcterraintiletype.meta.h"

enum ePlacementPriority
{
    EPlacementPriority_Low = 0,
    EPlacementPriority_Normal = 1,
    EPlacementPriority_High = 2,
};

enum eLargeObjectCoverage
{
    ELargeObjectCoverage_DoNotPlace = 0,
    ELargeObjectCoverage_DoNotPlaceIgnoreFootprint = 1,
    ELargeObjectCoverage_DoNotPlaceClose = 2,
    ELargeObjectCoverage_DoNotPlaceAnywhereNear = 3,
    ELargeObjectCoverage_OnlyPlaceAround = 4,
    ELargeObjectCoverage_OnlyPlaceAroundIgnoreFootprint = 5,
    ELargeObjectCoverage_AlwaysPlace = 6,
};

enum eOverlapStyle
{
    EOverlapStyle_None = 0,
    EOverlapStyle_SameSeed = 1,
    EOverlapStyle_All = 2,
};

enum eGroundColourIndex
{
    EGroundColourIndex_Auto = 0,
    EGroundColourIndex_Main = 1,
    EGroundColourIndex_Patch = 2,
};
#include "../../../../../metadata/source/metadata/simulation/environment/gcobjectspawndatavariant.meta.h"

class cGcObjectSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0x43EBB2E6AFAC5863;
    static const unsigned __int64 muTemplateHash = 0xD5427D42870E991C;
    static const int miNumMembers = 39;

    TkID<128> mDebugName;
    eType meType;
    cGcResourceElement mResource;
    cTkDynamicArray<cGcResourceElement> maAltResources;
    cTkDynamicArray<cGcTerrainTileType> maExtraTileTypes;
    TkID<128> mPlacement;
    cTkSeed mSeed;
    ePlacementPriority mePlacementPriority;
    eLargeObjectCoverage meLargeObjectCoverage;
    eOverlapStyle meOverlapStyle;
    float mfMinHeight;
    float mfMaxHeight;
    bool mbRelativeToSeaLevel;
    float mfMinAngle;
    float mfMaxAngle;
    bool mbMatchGroundColour;
    eGroundColourIndex meGroundColourIndex;
    bool mbSwapPrimaryForSecondaryColour;
    bool mbSwapPrimaryForRandomColour;
    bool mbAlignToNormal;
    float mfMinScale;
    float mfMaxScale;
    float mfMinScaleY;
    float mfMaxScaleY;
    float mfSlopeScaling;
    float mfPatchEdgeScaling;
    float mfMaxXZRotation;
    bool mbAutoCollision;
    bool mbCollideWithPlayer;
    bool mbCollideWithPlayerVehicle;
    bool mbDestroyedByPlayerVehicle;
    bool mbDestroyedByPlayerShip;
    bool mbDestroyedByTerrainEdit;
    bool mbInvisibleToCamera;
    bool mbCreaturesCanEat;
    float mfShearWindStrength;
    TkID<128> mDestroyedByVehicleEffect;
    cGcObjectSpawnDataVariant mQualityVariantData;
    cTkDynamicArray<cGcObjectSpawnDataVariant> maQualityVariants;

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
