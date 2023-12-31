#pragma once
#include "../../../../../../pch.h"

enum eMonth
{
    EMonth_January = 0,
    EMonth_February = 1,
    EMonth_March = 2,
    EMonth_April = 3,
    EMonth_May = 4,
    EMonth_June = 5,
    EMonth_July = 6,
    EMonth_August = 7,
    EMonth_September = 8,
    EMonth_October = 9,
    EMonth_November = 10,
    EMonth_December = 11,
};

class cGcMonth
{
public:
    static const unsigned __int64 muNameHash = 0x498BE03D1C172203;
    static const unsigned __int64 muTemplateHash = 0x7212715AB678D0C3;
    static const int miNumMembers = 1;

    eMonth meMonth;

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
