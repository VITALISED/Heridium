#include "tkmaterialshadermilldata.meta.h"

void cTkMaterialShaderMillData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21812208);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialShaderMillData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21814880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMaterialShaderMillData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21815968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

