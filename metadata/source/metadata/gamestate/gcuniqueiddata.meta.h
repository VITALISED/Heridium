#pragma once
#include "../../../../pch.h"

enum eUniqueIdType
{
    EUniqueIdType_Invalid = 0,
    EUniqueIdType_Deterministic = 1,
    EUniqueIdType_UserSpawned = 2,
};

class cGcUniqueIdData
{
public:
    static const unsigned __int64 muNameHash = 0xCA58D35FFFB37091;
    static const unsigned __int64 muTemplateHash = 0xB0959B82BA453EF8;
    static const int miNumMembers = 5;

    eUniqueIdType meUniqueIdType;
    unsigned __int64 mui64DeterministicSeed;
    unsigned int muiIteration;
    cTkFixedString<64,char> macOnlineID;
    cTkFixedString<32,char> macPlatformID;

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
