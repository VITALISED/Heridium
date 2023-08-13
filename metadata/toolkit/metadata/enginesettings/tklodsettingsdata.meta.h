#pragma once

#include "../../../../../../pch.h"
class cTkLODSettingsData
{
    static const unsigned __int64 muNameHash = 11583913368627415633;
    static const unsigned __int64 muTemplateHash = 5516113898440095175;
    static const int miNumMembers = 14;

    cTkFixedArray<float> maLODAdjust;
    cTkFixedArray<int> maImposterOverrideRange;
    cTkFixedArray<int> maMaxObjectDistanceOverride;
    cTkFixedArray<int> maRegionLODHiddenRanges;
    cTkFixedArray<int> maRegionLODRadius;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
