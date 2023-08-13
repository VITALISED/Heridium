#pragma once

#include "../../../../../../../../pch.h"
enum eDay
{
    EDay_Sunday = 0,
    EDay_Monday = 1,
    EDay_Tuesday = 2,
    EDay_Wednesday = 3,
    EDay_Thursday = 4,
    EDay_Friday = 5,
    EDay_Saturday = 6,
};

class cGcDay
{
    static const unsigned __int64 muNameHash = 16758769825751652318;
    static const unsigned __int64 muTemplateHash = 7273340923662065543;
    static const int miNumMembers = 1;

    eDay meDay;

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
