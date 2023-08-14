#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tkmodelresource.meta.h"
#include "../../../../../metadata/toolkit/metadata/tkmaterialresource.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingentry.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildinggroup.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingpalette.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcid256list.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingmaterial.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingproperties.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingfamily.meta.h"

class cGcBaseBuildingTable
{
public:
    static const unsigned __int64 muNameHash = 0x69B43206529CA591;
    static const unsigned __int64 muTemplateHash = 0x699CA7FB32674596;
    static const int miNumMembers = 17;

    cTkModelResource mLegModel;
    cTkModelResource mGhostHeart;
    cTkModelResource mGhostHeartSelected;
    cTkMaterialResource mBuildEffectMaterial;
    cTkModelResource mRotateScaleGizmo;
    cTkModelResource mWiringFirefly;
    cTkModelResource mWiringSnapPoint;
    cTkModelResource mWiringSnapSelected;
    cTkDynamicArray<cGcBaseBuildingEntry> maObjects;
    cTkDynamicArray<cGcBaseBuildingGroup> maGroups;
    cTkDynamicArray<cGcBaseBuildingPalette> maPalettes;
    cTkDynamicArray<cGcId256List> maPaletteGroups;
    cTkDynamicArray<cGcBaseBuildingMaterial> maMaterials;
    cTkDynamicArray<cGcId256List> maMaterialGroups;
    cGcBaseBuildingProperties mProperties;
    cTkDynamicArray<cGcBaseBuildingFamily> maFamilies;
    cGcBaseBuildingGroup mRelativesTabSetupData;

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
