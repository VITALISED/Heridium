#include "tkchordsimagelookup.meta.h"

void cTkChordsImageLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21094928);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkChordsImageLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkChordsImageLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

