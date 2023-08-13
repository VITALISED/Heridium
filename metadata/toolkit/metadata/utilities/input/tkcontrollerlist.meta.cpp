#include "tkcontrollerlist.meta.h"

void cTkControllerList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21095472);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkControllerList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkControllerList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

