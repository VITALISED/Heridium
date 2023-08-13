#pragma once
#include "pch.h"

class cGcShipAIPlanetPatrolData
{
public:
    static const unsigned __int64 muNameHash = 0xB7FEFB0DFC120BF4;
    static const unsigned __int64 muTemplateHash = 0x1359BFE0E49D8680;
    static const int miNumMembers = 10;

    TkID<128> mSquad;
    float mfPlayerOffset;
    float mfPlayerFalloff;
    float mfPathOffset;
    float mfWaypointDistance;
    float mfPathSpeed;
    float mfAlongPathForce;
    float mfToPathForce;
    float mfBrakeForce;
    float mfAlignForce;

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
