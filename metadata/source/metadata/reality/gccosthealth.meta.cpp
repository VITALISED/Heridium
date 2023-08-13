#include "gccosthealth.meta.h"

void cGcCostHealth::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30782992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostHealth::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30786080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostHealth::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30787184);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

