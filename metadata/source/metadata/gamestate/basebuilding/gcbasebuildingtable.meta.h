#pragma once
#include "pch.h"

class cTkModelResource;
class cTkModelResource;
class cTkModelResource;
class cTkMaterialResource;
class cTkModelResource;
class cTkModelResource;
class cTkModelResource;
class cTkModelResource;
class cGcBaseBuildingProperties;
class cGcBaseBuildingGroup;

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
    cTkDynamicArray<cGcBaseBuildingEntry1> maObjects;
    cTkDynamicArray<cGcBaseBuildingGroup1> maGroups;
    cTkDynamicArray<cGcBaseBuildingPalette1> maPalettes;
    cTkDynamicArray<cGcId256List1> maPaletteGroups;
    cTkDynamicArray<cGcBaseBuildingMaterial1> maMaterials;
    cTkDynamicArray<cGcId256List1> maMaterialGroups;
    cGcBaseBuildingProperties mProperties;
    cTkDynamicArray<cGcBaseBuildingFamily1> maFamilies;
    cGcBaseBuildingGroup mRelativesTabSetupData;

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
