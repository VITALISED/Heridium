#pragma once

#include "../../../../../../../pch.h"
class cGcGalaxyRenderSetupData
{
    static const unsigned __int64 muNameHash = 14099355616737727159;
    static const unsigned __int64 muTemplateHash = 5275334026443980932;
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
    cTkFixedArray<cTkColour> maMapLargeAreaPrimaryDefaultColours;
    cTkFixedArray<cTkColour> maMapLargeAreaPrimaryHighContrastColours;
    cTkFixedArray<cTkColour> maMapLargeAreaSecondaryDefaultColours;
    cTkFixedArray<cTkColour> maMapLargeAreaSecondaryHighContrastColours;

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
