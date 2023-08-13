#pragma once

#include "../../../../../../../../pch.h"
enum eTerrainEdits
{
    ETerrainEdits_None = 0,
    ETerrainEdits_ClearEntireBlock = 1,
    ETerrainEdits_UseScene = 2,
    ETerrainEdits_UseBasebuildingEdits = 3,
};
class cGcWFCFace;
class cGcWFCFace;
class cGcWFCFace;
class cGcWFCFace;
class cGcWFCFace;
class cGcWFCFace;

enum eFreighterModuleType
{
    EFreighterModuleType_None = 0,
    EFreighterModuleType_Room = 1,
    EFreighterModuleType_Corridor = 2,
};

class cGcWFCModulePrototype
{
    static const unsigned __int64 muNameHash = 16975596874281082716;
    static const unsigned __int64 muTemplateHash = 8417264194654967406;
    static const int miNumMembers = 22;

    cTkFixedString<128,char> macName;
    TkID<128> mId;
    cTkFixedString<128,char> macGroup;
    float mfRelativeProbability;
    bool mbInclude;
    bool mbExcludeOnGround;
    bool mbExcludeOnTop;
    bool mbIndoors;
    bool mbLimitToOnePerLevel;
    bool mbExcludeRotatedVariants;
    bool mbDontRotateModel;
    TkID<128> mLayoutGroup;
    cTkDynamicArray<cGcWeightedResource> maScenes;
    eTerrainEdits meTerrainEdits;
    cTkDynamicArray<cGcWFCTerrainConstraint> maTerrainConstraints;
    cGcWFCFace mLeft;
    cGcWFCFace mDown;
    cGcWFCFace mBack;
    cGcWFCFace mRight;
    cGcWFCFace mUp;
    cGcWFCFace mForward;
    eFreighterModuleType meFreighterModuleType;

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
