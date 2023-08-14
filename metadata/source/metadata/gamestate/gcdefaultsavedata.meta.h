#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcplayerstatedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcplayerspawnstatedata.meta.h"

class cGcDefaultSaveData
{
public:
    static const unsigned __int64 muNameHash = 0xF0829DCD8555A52E;
    static const unsigned __int64 muTemplateHash = 0x9C67E3A79F37ACA0;
    static const int miNumMembers = 2;

    cGcPlayerStateData mState;
    cGcPlayerSpawnStateData mSpawn;

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
