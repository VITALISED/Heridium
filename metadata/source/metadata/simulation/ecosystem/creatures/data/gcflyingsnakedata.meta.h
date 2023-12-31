#pragma once
#include "../../../../../../../pch.h"

class cGcFlyingSnakeData
{
public:
    static const unsigned __int64 muNameHash = 0x8AE34D6AD8F2EB14;
    static const unsigned __int64 muTemplateHash = 0x912B8C84F2D13E72;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
