#pragma once

#include "../../../../../../../pch.h"
class cGcSkyProperties
{
    static const unsigned __int64 muNameHash = 12114819843268607539;
    static const unsigned __int64 muTemplateHash = 12253931008060202196;
    static const int miNumMembers = 12;

    float mfAtmosphereThickness;
    float mfHorizonMultiplier;
    float mfDuskHorizonMultiplier;
    float mfNightHorizonMultiplier;
    float mfHorizonFadeSpeed;
    float mfDayHorizonTightness;
    float mfSunSize;
    float mfSunStrength;
    float mfSunSurroundSize;
    float mfSunSurroundStrength;
    float mfUpperSkyFadeSpeed;
    float mfUpperSkyFadeOffset;

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
