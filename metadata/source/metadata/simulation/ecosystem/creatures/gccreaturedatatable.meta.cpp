#include "gccreaturedatatable.meta.h"

void cGcCreatureDataTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27872944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureDataTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureDataTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27879888);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

