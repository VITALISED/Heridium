#include "gccreaturetagandrarity.meta.h"

void cGcCreatureTagAndRarity::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27876672);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureTagAndRarity::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27879376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureTagAndRarity::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

