#include "gcscreenfiltertable.meta.h"

void cGcScreenFilterTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31504464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScreenFilterTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31507136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScreenFilterTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31508208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

