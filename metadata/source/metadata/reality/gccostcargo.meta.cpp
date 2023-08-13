#include "gccostcargo.meta.h"

void cGcCostCargo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30781168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostCargo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30785600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostCargo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

