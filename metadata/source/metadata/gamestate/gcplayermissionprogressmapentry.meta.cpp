#include "gcplayermissionprogressmapentry.meta.h"

void cGcPlayerMissionProgressMapEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33787568);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerMissionProgressMapEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33790448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerMissionProgressMapEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33791472);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

