#pragma once
#include "../../../../../../../../pch.h"

class cGcPlanetHeavyAirData;

class cGcPlanetWaterData
{
    static const unsigned __int64 muNameHash = 0x98F83A1A50531877;
    static const unsigned __int64 muTemplateHash = 0xF87D71ED70DA7A24;
    static const int miNumMembers = 25;

    int miColourIndex;
    float mfWaterStrength;
    float mfWaterColourStrength;
    float mfWaterMultiplyStrength;
    float mfWaterMultiplyMax;
    float mfWaterRoughness;
    float mfFresnelPower;
    float mfFresnelMin;
    float mfFresnelMax;
    float mfWave1Scale;
    float mfWave1Height;
    float mfWave1Speed;
    float mfWave2Scale;
    float mfWave2Height;
    float mfWave2Speed;
    float mfNormalMap1Scale;
    float mfNormalMap1Speed;
    float mfNormalMap2Scale;
    float mfNormalMap2Speed;
    float mfFoamFadeHeight;
    float mfFoam1Scale;
    float mfFoam1Speed;
    float mfFoam2Scale;
    float mfFoam2Speed;
    cGcPlanetHeavyAirData mHeavyAir;

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
