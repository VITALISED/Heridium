#pragma once
#include "../../../../../../../../pch.h"

class cGcSolarSystemSkyColourData
{
    static const unsigned __int64 muNameHash = 0x2C473DC1DB095F44;
    static const unsigned __int64 muTemplateHash = 0x3FCFDB1505B25B0D;
    static const int miNumMembers = 13;

    cTkColour mTopColour;
    cTkColour mMidColour;
    cTkColour mBottomColour;
    cTkColour mTopColourPlanet;
    cTkColour mMidColourPlanet;
    cTkColour mBottomColourPlanet;
    cTkColour mCloudColour;
    cTkColour mLightColour;
    cTkColour mNebulaColour1;
    cTkColour mNebulaColour2;
    cTkColour mNebulaColour3;
    cTkColour mFogColour;
    cTkColour mFogColour2;

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
