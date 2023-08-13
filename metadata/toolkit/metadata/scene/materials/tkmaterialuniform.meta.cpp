#include "tkmaterialuniform.meta.h"

void cTkMaterialUniform::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21813536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialUniform::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21815200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMaterialUniform::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21816160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

