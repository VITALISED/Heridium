#include "gccamerashakemechanicaldata.meta.h"

void cGcCameraShakeMechanicalData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31502944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraShakeMechanicalData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31506736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraShakeMechanicalData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31507968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

