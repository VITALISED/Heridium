#include "tkmaterialsampler.meta.h"

void cTkMaterialSampler::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21811344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialSampler::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21814640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMaterialSampler::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21815664);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

