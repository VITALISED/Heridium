#include "gcwonderweirdbasepartcategory.meta.h"

void cGcWonderWeirdBasePartCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22502208);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderWeirdBasePartCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderWeirdBasePartCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

