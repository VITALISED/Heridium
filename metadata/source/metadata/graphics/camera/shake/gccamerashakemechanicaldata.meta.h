#pragma once

#include "../../../../../../../../pch.h"
class cGcCameraShakeMechanicalData
{
    static const unsigned __int64 muNameHash = 4665538744377768730;
    static const unsigned __int64 muTemplateHash = 15979885507275939743;
    static const int miNumMembers = 7;

    bool mbActive;
    cTkVector mShakeStrength;
    cTkVector mShakeFrequency;
    cTkVector mExtraShakeFrequency;
    cTkVector mVibrateStrength;
    cTkVector mVibrateFrequency;
    cTkVector mExtraVibrateFrequency;

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