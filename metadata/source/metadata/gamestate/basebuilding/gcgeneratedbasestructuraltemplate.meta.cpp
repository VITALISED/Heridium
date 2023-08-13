#include "gcgeneratedbasestructuraltemplate.meta.h"

void cGcGeneratedBaseStructuralTemplate::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34206320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGeneratedBaseStructuralTemplate::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34212128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGeneratedBaseStructuralTemplate::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213584);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

