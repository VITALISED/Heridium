#pragma once
#include "../../../../../../../pch.h"

class cTkEmitterFloatProperty;
class cTkEmitterFloatProperty;

class cTkParticleBurstData
{
    static const unsigned __int64 muNameHash = 0x523281BEC01AA0F4;
    static const unsigned __int64 muTemplateHash = 0x6026455A2E436CAA;
    static const int miNumMembers = 3;

    cTkEmitterFloatProperty mBurstAmount;
    cTkEmitterFloatProperty mBurstInterval;
    int miLoopCount;

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
