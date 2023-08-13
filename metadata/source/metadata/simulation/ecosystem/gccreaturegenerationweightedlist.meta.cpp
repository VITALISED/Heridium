#include "gccreaturegenerationweightedlist.meta.h"

void cGcCreatureGenerationWeightedList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27668448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureGenerationWeightedList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27670096);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureGenerationWeightedList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27671136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

