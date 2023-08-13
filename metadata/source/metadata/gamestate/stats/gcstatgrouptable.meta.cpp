#include "gcstatgrouptable.meta.h"

void cGcStatGroupTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33022320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatGroupTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025792);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatGroupTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33027040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

