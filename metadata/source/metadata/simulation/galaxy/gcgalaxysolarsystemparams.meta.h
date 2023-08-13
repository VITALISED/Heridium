#pragma once
#include "pch.h"

class cGcGalaxySolarSystemOrbitParams;
class cGcGalaxySolarSystemOrbitParams;

class cGcGalaxySolarSystemParams
{
public:
    static const unsigned __int64 muNameHash = 0x3454C9AB7AAC46D9;
    static const unsigned __int64 muTemplateHash = 0x46D508F9992D3331;
    static const int miNumMembers = 7;

    cGcGalaxySolarSystemOrbitParams mPlanetParameters;
    cGcGalaxySolarSystemOrbitParams mMoonParameters;
    cTkFixedArray<float, 4> maPlanetRadii;
    float mfSystemTilt;
    float mfDefaultDistance;
    float mfVisitedPlanetAlpha;
    float mfNonVisitedPlanetAlpha;

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
