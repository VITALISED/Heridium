#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/stats/gcplayerstat.meta.h"

class cGcPlayerStatsGroup
{
public:
    static const unsigned __int64 muNameHash = 0xEBAB39E2F49FE5F;
    static const unsigned __int64 muTemplateHash = 0xD0E298116C7E223F;
    static const int miNumMembers = 3;

    TkID<128> mGroupId;
    unsigned __int64 mui64Address;
    cTkDynamicArray<cGcPlayerStat> maStats;

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
