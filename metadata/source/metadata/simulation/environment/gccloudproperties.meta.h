#pragma once
#include "../../../../../pch.h"

class cGcCloudProperties
{
public:
    static const unsigned __int64 muNameHash = 0x21C58A0DDEF4EC87;
    static const unsigned __int64 muTemplateHash = 0xACC78F5C88ED57CC;
    static const int miNumMembers = 33;

    float mfHorizonCoverageStart;
    float mfHorizonCoverageEnd;
    cTkColour mCloudBaseColour;
    cTkColour mCloudTopColour;
    float mfLightScalar;
    float mfAmbientScalar;
    float mfSunRayLength;
    float mfConeRadius;
    float mfDensity;
    float mfAmbientDensity;
    float mfForwardScatteringG;
    float mfBackwardScatteringG;
    float mfDarkOutlineScalar;
    float mfAnimationScale;
    cTkVector2 mWindOffset;
    cTkVector2 mStratosphereWindOffset;
    float mfBaseScale;
    float mfSampleScalar;
    float mfSampleThreshold;
    float mfCloudBottomFade;
    cTkVector4 mCloudHeightGradient1;
    cTkVector4 mCloudHeightGradient2;
    cTkVector4 mCloudHeightGradient3;
    float mfDetailScale;
    float mfErosionEdgeSize;
    float mfCloudDistortion;
    float mfCloudDistortionScale;
    float mfMaxIterations;
    float mfRayMinimumY;
    float mfLODDistance;
    float mfHorizonFadeStartAlpha;
    float mfHorizonFadeScalar;
    float mfHorizonDistance;

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
