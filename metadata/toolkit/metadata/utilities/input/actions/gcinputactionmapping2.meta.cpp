#include "gcinputactionmapping2.meta.h"

void cGcInputActionMapping2::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21153680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInputActionMapping2::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21157408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInputActionMapping2::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21158208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

