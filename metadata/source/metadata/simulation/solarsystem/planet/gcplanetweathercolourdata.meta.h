#pragma once
#include "pch.h"

class cGcPlanetWeatherColourData
{
public:
    static const unsigned __int64 muNameHash = 0xA699A80ACABBB3C5;
    static const unsigned __int64 muTemplateHash = 0x79EC01ECC601AA7F;
    static const int miNumMembers = 11;

    cTkColour mSkyColour;
    cTkColour mSkyUpperColour;
    cTkColour mSkySolarColour;
    cTkColour mHorizonColour;
    cTkColour mSunColour;
    cTkColour mFogColour;
    cTkColour mHeightFogColour;
    cTkVector3 mSkyGradientSpeed;
    cTkColour mLightColour;
    cTkColour mCloudColour1;
    cTkColour mCloudColour2;

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
