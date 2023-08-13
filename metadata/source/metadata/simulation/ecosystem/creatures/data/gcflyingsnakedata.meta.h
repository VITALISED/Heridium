#pragma once

#include "../../../../../../../../../pch.h"
class cGcFlyingSnakeData
{
    static const unsigned __int64 muNameHash = 10007927918249044756;
    static const unsigned __int64 muTemplateHash = 10460609062135479922;
    static const int miNumMembers = 16;

    float mfCircleSpeed;
    float mfApproachBaitSpeed;
    float mfDefaultCircleDistance;
    float mfBarrelRollSpawnDelay;
    float mfBarrelRollCount;
    float mfBarrelRollSpeed;
    float mfRiseDelay;
    float mfRiseHeight;
    float mfRiseTime;
    float mfAirThickness;
    float mfWindForce;
    float mfTailStiffness;
    float mfTwistLimit;
    float mfAltitudeSinPeriod;
    float mfAltitudeSinAmp;
    float mfAscendDescendSpeed;

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