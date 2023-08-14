#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcunlockableitemtreenode.meta.h"

class cGcUnlockableItemTree
{
public:
    static const unsigned __int64 muNameHash = 0x6B3A62EF81161171;
    static const unsigned __int64 muTemplateHash = 0x82DD1A0F7255A793;
    static const int miNumMembers = 3;

    TkID<256> mTitle;
    TkID<128> mCostTypeID;
    cGcUnlockableItemTreeNode mRoot;

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
