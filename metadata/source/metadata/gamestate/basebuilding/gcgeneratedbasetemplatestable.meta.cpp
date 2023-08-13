#include "gcgeneratedbasetemplatestable.meta.h"

void cGcGeneratedBaseTemplatesTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34206640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGeneratedBaseTemplatesTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34212208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGeneratedBaseTemplatesTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213632);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

