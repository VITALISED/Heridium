#include "gcwonderfloracategory.meta.h"

void cGcWonderFloraCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22499856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderFloraCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderFloraCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506592);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

