#pragma once
#include "../../../../../../pch.h"

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
public:
    static const unsigned __int64 muNameHash = 0xE8931C5D607657DE;
    static const unsigned __int64 muTemplateHash = 0x64F01908C5305F87;
    static const int miNumMembers = 1;

    eDay meDay;

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
