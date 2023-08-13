#include "tkpostprocessdata.meta.h"

void cTkPostProcessData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21155616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkPostProcessData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21157888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkPostProcessData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21158496);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

