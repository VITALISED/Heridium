#pragma once
#include "../../../../../../../pch.h"

#include "../../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcweightedresource.meta.h"

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
#include "../../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/decoration/gcwfcdecorationface.meta.h"

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
    cTkDynamicArray<cGcWeightedResource> maScenes;
    cTkDynamicArray<TkID<128> > maApplicableModules;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
