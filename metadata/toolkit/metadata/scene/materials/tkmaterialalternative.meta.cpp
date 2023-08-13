#include "tkmaterialalternative.meta.h"

void cTkMaterialAlternative::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21810096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialAlternative::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21814400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMaterialAlternative::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21815440);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

