#include "gcmodelviewcollection.meta.h"

void cGcModelViewCollection::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31421200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcModelViewCollection::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425264);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcModelViewCollection::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426592);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

