#include "tkresourcedescriptordata.meta.h"

void cTkResourceDescriptorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22243552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkResourceDescriptorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22246848);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkResourceDescriptorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

