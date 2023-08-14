#pragma once
#include "../../../../pch.h"

class cTkLODSettingsData
{
public:
    static const unsigned __int64 muNameHash = 0xA0C253D5A5EF8A51;
    static const unsigned __int64 muTemplateHash = 0x4C8D2C5D711DF5C7;
    static const int miNumMembers = 14;

    cTkFixedArray<float, 5> maLODAdjust;
    cTkFixedArray<int, 6> maImposterOverrideRange;
    cTkFixedArray<int, 6> maMaxObjectDistanceOverride;
    cTkFixedArray<int, 6> maRegionLODHiddenRanges;
    cTkFixedArray<int, 6> maRegionLODRadius;
    bool mbEnableOctahedralImposters;
    bool mbViewImpostersFromSpace;
    int miNumberOfImposterViews;
    int miImposterResolutionMultiplier;
    int miAsteroidCountMultiplier;
    int miAsteroidDividerMultiplier;
    float mfAsteroidFadeRangeMultiplier;
    int miMaxAsteroidGenerationPerFrame;
    int miMaxAsteroidGenerationPerFramePulseJump;

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
