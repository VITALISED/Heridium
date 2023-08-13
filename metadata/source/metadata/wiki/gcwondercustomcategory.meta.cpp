#include "gcwondercustomcategory.meta.h"

void cGcWonderCustomCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22499536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderCustomCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderCustomCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506544);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

