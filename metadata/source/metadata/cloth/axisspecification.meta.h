#pragma once
#include "../../../../../../pch.h"

enum eAxis
{
    EAxis_X = 0,
    EAxis_Y = 1,
    EAxis_Z = 2,
    EAxis_NegativeX = 3,
    EAxis_NegativeY = 4,
    EAxis_NegativeZ = 5,
    EAxis_CustomAxis = 6,
};

class cAxisSpecification
{
    static const unsigned __int64 muNameHash = 0xE46A33ECA1AA62F7;
    static const unsigned __int64 muTemplateHash = 0xE064B06A0D53FBE6;
    static const int miNumMembers = 2;

    eAxis meAxis;
    cTkVector mCustomAxis;

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
