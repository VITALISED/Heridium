#include "gcinputactionmapping.meta.h"

void cGcInputActionMapping::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21154016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInputActionMapping::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21157488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInputActionMapping::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21158256);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

