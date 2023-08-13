#include "gcfiendcrimeaction.meta.h"

void cGcFiendCrimeAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28488544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFiendCrimeAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28495200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFiendCrimeAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28496960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

