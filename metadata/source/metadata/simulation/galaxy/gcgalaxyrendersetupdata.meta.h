#pragma once
#include "../../../../../pch.h"

class cGcGalaxyRenderSetupData
{
public:
    static const unsigned __int64 muNameHash = 0xC3AAF93B598F92B7;
    static const unsigned __int64 muTemplateHash = 0x4935C058DDB98084;
    static const int miNumMembers = 38;

    cTkColour mSunCoreColour;
    float mfSunCoreSmaller;
    float mfSunCoreLarger;
    float mfSunCoreBGContrib;
    float mfSunCoreFGContrib;
    float mfBGCellTraceScale;
    float mfBGCellMoveScale;
    float mfBGCellHorizonInfluence;
    float mfBGColourStage1;
    float mfBGColourStage2;
    float mfBGColourStage3;
    float mfBGColourStage4;
    float mfBGColourCellBlend;
    float mfBGColourPow;
    float mfStarFieldBlendAmount;
    float mfLensFlareBase;
    cTkColour mLensFlareColour;
    cTkVector4 mLensFlareSpread;
    float mfNebulaeAlphaPow;
    float mfNebulaeTraceValueMult;
    float mfNebulaeTraceScale;
    float mfNebulaeTraceDensity;
    float mfNebulaeTraceDensityCutoff;
    cTkVector2 mNebulaeTraceStepRange;
    cTkVector4 mCompositionControlB_S_C_G;
    float mfCompositionSaturationIncreaseError;
    float mfCompositionSaturationIncreaseFilter;
    float mfCompositionSaturationIncreaseSelected;
    float mfVignetteSize;
    float mfVignetteBase;
    float mfVignetteSizeIncreaseError;
    float mfVignetteSizeIncreaseFilter;
    float mfVignetteSizeIncreaseSelected;
    cTkVector2 mLensFlareExpandTowards;
    cTkFixedArray<cTkColour, 10> maMapLargeAreaPrimaryDefaultColours;
    cTkFixedArray<cTkColour, 10> maMapLargeAreaPrimaryHighContrastColours;
    cTkFixedArray<cTkColour, 10> maMapLargeAreaSecondaryDefaultColours;
    cTkFixedArray<cTkColour, 10> maMapLargeAreaSecondaryHighContrastColours;

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
