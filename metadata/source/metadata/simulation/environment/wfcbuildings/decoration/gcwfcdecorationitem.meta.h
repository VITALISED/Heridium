#pragma once
#include "pch.h"

enum eInsideOutside
{
    EInsideOutside_Both = 0,
    EInsideOutside_InteriorOnly = 1,
    EInsideOutside_ExteriorOnly = 2,
};

enum eLevel
{
    ELevel_Everywhere = 0,
    ELevel_GroundLevelOnly = 1,
    ELevel_AboveGroundOnly = 2,
};
class cGcWFCDecorationFace;
class cGcWFCDecorationFace;
class cGcWFCDecorationFace;
class cGcWFCDecorationFace;
class cGcWFCDecorationFace;
class cGcWFCDecorationFace;

class cGcWFCDecorationItem
{
public:
    static const unsigned __int64 muNameHash = 0x9DDB490E0E777CD8;
    static const unsigned __int64 muTemplateHash = 0x37516E17AC76EC4E;
    static const int miNumMembers = 20;

    TkID<128> mName;
    TkID<128> mGroup;
    float mfRelativeProbability;
    float mfNoSceneProbability;
    bool mbInclude;
    cTkDynamicArray<cGcWeightedResource1> maScenes;
    cTkDynamicArray<TkID<128>1> maApplicableModules;
    bool mbRotate;
    bool mbRequireReachable;
    int miMaxPerBuilding;
    int miMinPerBuilding;
    bool mbRequireAboveTerrain;
    eInsideOutside meInsideOutside;
    eLevel meLevel;
    cGcWFCDecorationFace mLeft;
    cGcWFCDecorationFace mDown;
    cGcWFCDecorationFace mBack;
    cGcWFCDecorationFace mRight;
    cGcWFCDecorationFace mUp;
    cGcWFCDecorationFace mForward;

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
