#pragma once
#include "../../../../../../../pch.h"

class cGcPlanetWeatherColourIndex;

class cGcSpaceSkyProperties
{
    static const unsigned __int64 muNameHash = 0xCB4FC853C028D8AE;
    static const unsigned __int64 muTemplateHash = 0x157FDABAEA56DDB6;
    static const int miNumMembers = 32;

    cGcPlanetWeatherColourIndex mColourIndex;
    cTkColour mPlanetSkyColour;
    cTkColour mPlanetHorizonColour;
    float mfSunStrength;
    float mfSunSize;
    float mfStarVisibility;
    float mfCenterPower;
    float mfAtmosphereThickness;
    float mfHorizonMultiplier;
    float mfHorizonFadeSpeed;
    float mfPlanetFogStrength;
    float mfSpaceFogStrength;
    float mfSpaceFogColourStrength;
    float mfSpaceFogColour2Strength;
    float mfSpaceFogMax;
    float mfSpaceFogPlanetMax;
    float mfNebulaFrequency;
    float mfNebulaSparseness;
    float mfNebulaWispyness;
    float mfNebulaWispyness1;
    float mfNebulaBrightness;
    float mfNebulaSeed;
    float mfNebulaTendrilStrength;
    float mfNebulaFogAmount;
    float mfNebulaCloudStrength;
    float mfNebulaCloudStrength1;
    float mfNebulaNoiseFrequency;
    float mfCloudNoiseFrequency;
    float mfNebulaTurbulenceStrength;
    float mfNebulaFBMStrength;
    float mfNebulaFBMStrength1;
    float mfNebulaDistortionStrength;

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
