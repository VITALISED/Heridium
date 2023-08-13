#pragma once

#include "../../../../../../../pch.h"
class cGcShipAIDeathData
{
    static const unsigned __int64 muNameHash = 5922956335453983772;
    static const unsigned __int64 muTemplateHash = 10235128342278942243;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};