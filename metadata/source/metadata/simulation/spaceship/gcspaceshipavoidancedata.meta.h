#pragma once

#include "../../../../../../../pch.h"
class cGcSpaceshipAvoidanceData
{
    static const unsigned __int64 muNameHash = 16575421388251081429;
    static const unsigned __int64 muTemplateHash = 4643004752187663117;
    static const int miNumMembers = 9;

    int miNumRays;
    float mfRayMinRange;
    float mfRaySpeedTime;
    float mfForce;
    float mfStartRadiusMultiplier;
    float mfEndRadiusMultiplier;
    float mfSpeedInterp;
    float mfSpeedInterpMinSpeed;
    float mfSpeedInterpRange;

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
