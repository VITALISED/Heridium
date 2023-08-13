#include "tkmaterialflags.meta.h"

void cTkMaterialFlags::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21811120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialFlags::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21814560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMaterialFlags::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21815536);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

