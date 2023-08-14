#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcunlockableitemtreegroups.meta.h"

class cGcRewardOpenUnlockTree
{
public:
    static const unsigned __int64 muNameHash = 0x6F44BB3A2BA686D8;
    static const unsigned __int64 muTemplateHash = 0x3D69CE9F54FAB4EC;
    static const int miNumMembers = 2;

    cGcUnlockableItemTreeGroups mTreeToOpen;
    int miPageIndexOverride;

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
