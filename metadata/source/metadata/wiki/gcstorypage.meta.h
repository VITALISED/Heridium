#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/components/gameplay/gcinteractiontype.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/wiki/gcstoryentry.meta.h"
#include "../../../../metadata/source/metadata/wiki/gcwikitopictype.meta.h"

class cGcStoryPage
{
public:
    static const unsigned __int64 muNameHash = 0xDA4CC10DF6E92F8C;
    static const unsigned __int64 muTemplateHash = 0xE8EF7AE92F0F264;
    static const int miNumMembers = 8;

    cGcInteractionType mInteractionType;
    TkID<128> mStat;
    bool mbStatIsBitmask;
    cTkTextureResource mIcon;
    TkID<256> mID;
    cTkDynamicArray<cGcStoryEntry> maEntries;
    bool mbUseGridType;
    cGcWikiTopicType mWikiGridType;

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
