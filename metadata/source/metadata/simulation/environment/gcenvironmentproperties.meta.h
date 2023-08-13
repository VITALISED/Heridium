#pragma once

#include "../../../../../../../pch.h"
class cGcEnvironmentProperties
{
    static const unsigned __int64 muNameHash = 12764800962724073828;
    static const unsigned __int64 muTemplateHash = 6375086355853223884;
    static const int miNumMembers = 27;

    float mfFlightFogHeight;
    float mfFlightFogBlend;
    float mfCloudHeightMin;
    float mfCloudHeightMax;
    float mfHeavyAirHeightMin;
    float mfHeavyAirHeightMax;
    float mfPlanetObjectSwitch;
    float mfPlanetLodSwitch0;
    float mfPlanetLodSwitch0Elevation;
    float mfPlanetLodSwitch1;
    float mfPlanetLodSwitch2;
    float mfPlanetLodSwitch3;
    float mfAsteroidFadeHeightMin;
    float mfAsteroidFadeHeightMax;
    cTkFixedArray<float> maSkyHeight;
    float mfSkyAtmosphereHeight;
    float mfHorizonBlendHeight;
    float mfHorizonBlendLength;
    float mfSkyColourHeight;
    float mfSkyColourBlendLength;
    float mfSkyPositionHeight;
    float mfSkyPositionBlendLength;
    float mfSolarSystemLUTHeight;
    float mfSolarSystemLUTBlendLength;
    float mfAtmosphereStartHeight;
    float mfAtmosphereEndHeight;
    float mfStratosphereHeight;

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
