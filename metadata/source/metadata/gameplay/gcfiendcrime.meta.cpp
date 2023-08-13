#include "gcfiendcrime.meta.h"

void cGcFiendCrime::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34743760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFiendCrime::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFiendCrime::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

