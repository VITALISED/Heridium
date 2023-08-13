#pragma once

#include "../../../../../../pch.h"
class cGcInteractionType;
class cTkTextureResource;
class cGcWikiTopicType;

class cGcStoryPage
{
    static const unsigned __int64 muNameHash = 15730159864219512716;
    static const unsigned __int64 muTemplateHash = 1049048092385538660;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
