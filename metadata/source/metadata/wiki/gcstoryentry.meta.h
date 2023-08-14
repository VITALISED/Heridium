#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/wiki/gcstoryentrybranch.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

class cGcStoryEntry
{
public:
    static const unsigned __int64 muNameHash = 0x7D4184057E24E50A;
    static const unsigned __int64 muTemplateHash = 0x94B5A44747517D29;
    static const int miNumMembers = 6;

    TkID<256> mTitle;
    TkID<256> mEntry;
    cTkDynamicArray<cGcStoryEntryBranch> maBranchedEntries;
    TkID<256> mAlienText;
    bool mbAutoPrefixWithAlienText;
    cGcAlienRace mAlienTextForceRace;

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
