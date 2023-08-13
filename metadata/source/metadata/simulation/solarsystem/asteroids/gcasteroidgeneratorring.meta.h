#pragma once

#include "../../../../../../../../pch.h"
class cGcAsteroidGeneratorAssignment;

class cGcAsteroidGeneratorRing
{
    static const unsigned __int64 muNameHash = 8737048240584944496;
    static const unsigned __int64 muTemplateHash = 18350731361862522244;
    static const int miNumMembers = 9;

    cGcAsteroidGeneratorAssignment mAssignment;
    float mfLowerRadius;
    float mfUpperRadius;
    float mfPushRadius;
    int miOffBalance;
    cTkVector mRotation;
    float mfUSpread;
    float mfPushAmount;
    bool mbFlipPush;

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
