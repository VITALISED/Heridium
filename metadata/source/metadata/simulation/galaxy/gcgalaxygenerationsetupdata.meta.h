#pragma once
#include "pch.h"

class cGcGalaxyGenerationSetupData
{
public:
    static const unsigned __int64 muNameHash = 0x74E6E445263E30C1;
    static const unsigned __int64 muTemplateHash = 0xCD69498AB6E7B213;
    static const int miNumMembers = 32;

    float mfSpiralFormChance;
    cTkVector2 mSpiralInclusion;
    cTkVector2 mSpiralFlex;
    float mfSpiralTwistMult;
    cTkVector3 mSpiralPull;
    cTkVector2 mSpiralSizeScale;
    float mfRareSunChance;
    cTkVector2 mConnectionAttractorMax;
    cTkVector2 mConnectionAttractorMin;
    cTkVector2 mConnectionDistortion;
    float mfConnectionDistortionTMult;
    float mfConnectionDistanceLimit;
    cTkVector2 mBaseSize;
    cTkFixedArray<cTkVector2, 4> maStarSize;
    float mfBaseTurbulenceScale;
    float mfBaseTurbulenceLac;
    float mfBaseTurbulenceGain;
    float mfBaseGenerationThreshold;
    float mfFieldGenerationThreshold;
    float mfStarGenerationThreshold;
    cTkVector4 mInnerFieldScales;
    float mfSizeNoiseScale;
    float mfSizeNoisePower;
    float mfSizeField4Inf;
    float mfFieldAlphaBase;
    float mfFieldAlphaField1Inf;
    float mfFieldAlphaField2SqInf;
    float mfStarHighlightChance;
    cTkVector2 mStarHighlightAlpha;
    cTkVector2 mStarHighlightSize;
    float mfColourBaseBlendOnSize;
    cTkFixedArray<cTkColour, 10> maInnerSectorColours;

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
