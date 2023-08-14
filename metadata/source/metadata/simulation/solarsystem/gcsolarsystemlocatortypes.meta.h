#pragma once
#include "../../../../../pch.h"

enum eLocatorType
{
    ELocatorType_Generic1 = 0,
    ELocatorType_Generic2 = 1,
    ELocatorType_Generic3 = 2,
    ELocatorType_Generic4 = 3,
};

class cGcSolarSystemLocatorTypes
{
public:
    static const unsigned __int64 muNameHash = 0xB1D42EFA923F8574;
    static const unsigned __int64 muTemplateHash = 0xEA28003C2F8842CB;
    static const int miNumMembers = 1;

    eLocatorType meLocatorType;

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
