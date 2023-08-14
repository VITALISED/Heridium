#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/gamestate/basebuilding/npc/gcfreighterroomnpcspawncapacityentry.meta.h"

class cGcFreighterRoomNPCSpawnCapacities
{
public:
    static const unsigned __int64 muNameHash = 0xF9AE5C7D267CB35F;
    static const unsigned __int64 muTemplateHash = 0xA461AD798F8E00FD;
    static const int miNumMembers = 1;

    cTkDynamicArray<cGcFreighterRoomNPCSpawnCapacityEntry> maRoomSpawnCapacities;

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
