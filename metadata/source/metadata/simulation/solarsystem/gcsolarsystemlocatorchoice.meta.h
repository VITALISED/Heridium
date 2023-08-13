#pragma once
#include "pch.h"

enum eChoice
{
    EChoice_LookupName = 0,
    EChoice_AnyOfType = 1,
    EChoice_SpecificIndex = 2,
    EChoice_InFrontOfPlayer = 3,
};
class cGcSolarSystemLocatorTypes;

class cGcSolarSystemLocatorChoice
{
public:
    static const unsigned __int64 muNameHash = 0x84B1F1D780A31A2A;
    static const unsigned __int64 muTemplateHash = 0xFCC48A5DDF4D778C;
    static const int miNumMembers = 4;

    eChoice meChoice;
    cTkFixedString<32,char> macName;
    cGcSolarSystemLocatorTypes mType;
    int miIndex;

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
