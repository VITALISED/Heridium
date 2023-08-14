#pragma once
#include "../../../../../pch.h"

class cGcShipAIDeathData
{
public:
    static const unsigned __int64 muNameHash = 0x52329167EAE2541C;
    static const unsigned __int64 muTemplateHash = 0x8E0A7AFFD011AE23;
    static const int miNumMembers = 7;

    float mfDroneDeathTime;
    float mfDroneDeathForce;
    float mfDroneDeathBoomTotalTime;
    float mfDroneDeathOffset;
    int miDroneNumDeathBooms;
    float mfDroneDeathTimeout;
    float mfBrakeForce;

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
