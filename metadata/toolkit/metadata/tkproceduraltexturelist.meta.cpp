#include "tkproceduraltexturelist.meta.h"

void cTkProceduralTextureList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21485008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkProceduralTextureList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21488512);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkProceduralTextureList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21489616);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

