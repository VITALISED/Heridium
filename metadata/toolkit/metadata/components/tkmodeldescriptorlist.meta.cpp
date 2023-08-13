#include "tkmodeldescriptorlist.meta.h"

void cTkModelDescriptorList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22241840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkModelDescriptorList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22246368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkModelDescriptorList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247584);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

