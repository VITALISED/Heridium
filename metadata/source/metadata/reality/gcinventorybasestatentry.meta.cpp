#include "gcinventorybasestatentry.meta.h"

void cGcInventoryBaseStatEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30588592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryBaseStatEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30591120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryBaseStatEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592352);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

