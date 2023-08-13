#include "tkresourcefilterdata.meta.h"

void cTkResourceFilterData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22244160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkResourceFilterData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22247008);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkResourceFilterData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

