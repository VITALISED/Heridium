#include "tkresourcedescriptorlist.meta.h"

void cTkResourceDescriptorList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22243856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkResourceDescriptorList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22246928);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkResourceDescriptorList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

