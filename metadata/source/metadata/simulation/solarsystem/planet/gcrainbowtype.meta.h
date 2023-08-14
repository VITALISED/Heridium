#pragma once
#include "../../../../../../pch.h"

enum eRainbowType
{
    ERainbowType_Always = 0,
    ERainbowType_Occasional = 1,
    ERainbowType_Storm = 2,
    ERainbowType_None = 3,
};

class cGcRainbowType
{
public:
    static const unsigned __int64 muNameHash = 0x71FCE9DED22FE107;
    static const unsigned __int64 muTemplateHash = 0xBEA479D78D467F2B;
    static const int miNumMembers = 1;

    eRainbowType meRainbowType;

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
