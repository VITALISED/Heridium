#pragma once
#include "pch.h"

class cGcSolarSystemLocatorTypes;

class cGcSolarSystemLocator
{
public:
    static const unsigned __int64 muNameHash = 0x39BE669FF8F8CD9;
    static const unsigned __int64 muTemplateHash = 0x8A1BA8C4F06F7526;
    static const int miNumMembers = 5;

    cTkFixedString<32,char> macName;
    cGcSolarSystemLocatorTypes mType;
    cTkVector3 mPosition;
    cTkVector3 mDirection;
    float mfRadius;

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
