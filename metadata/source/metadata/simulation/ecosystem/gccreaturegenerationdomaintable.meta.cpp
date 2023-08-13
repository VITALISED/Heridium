#include "gccreaturegenerationdomaintable.meta.h"

void cGcCreatureGenerationDomainTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27667840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureGenerationDomainTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27669936);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureGenerationDomainTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27671040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

