#pragma once
#include "../../../../../pch.h"

enum eSpawnMode
{
    ESpawnMode_None = 0,
    ESpawnMode_UseSeed = 1,
    ESpawnMode_UseAltID = 2,
};

class cGcSpaceStationSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0x1FD33D08A7082C22;
    static const unsigned __int64 muTemplateHash = 0xB2FF18440DA1DBF7;
    static const int miNumMembers = 5;

    eSpawnMode meSpawnMode;
    cTkSeed mSeed;
    cTkFixedString<256,char> macAltId;
    cTkVector3 mSpawnPosition;
    cTkVector3 mSpawnFacing;

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
