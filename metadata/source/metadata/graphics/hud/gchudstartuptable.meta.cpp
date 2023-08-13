#include "gchudstartuptable.meta.h"

void cGcHUDStartupTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31419456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHUDStartupTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31424944);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHUDStartupTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426400);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

