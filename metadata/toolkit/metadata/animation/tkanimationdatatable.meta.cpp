#include "tkanimationdatatable.meta.h"

void cTkAnimationDataTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22423040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimationDataTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425936);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimationDataTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

