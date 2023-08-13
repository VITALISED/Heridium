#include "gccreaturestupidnametable.meta.h"

void cGcCreatureStupidNameTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27876064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureStupidNameTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27879216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureStupidNameTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

