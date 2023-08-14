#pragma once
#include "../../../../../pch.h"

enum eGalaxyStarType
{
    EGalaxyStarType_Yellow = 0,
    EGalaxyStarType_Green = 1,
    EGalaxyStarType_Blue = 2,
    EGalaxyStarType_Red = 3,
};

class cGcGalaxyStarTypes
{
public:
    static const unsigned __int64 muNameHash = 0x737DC36BC0894840;
    static const unsigned __int64 muTemplateHash = 0xE3336B93F6817965;
    static const int miNumMembers = 1;

    eGalaxyStarType meGalaxyStarType;

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
