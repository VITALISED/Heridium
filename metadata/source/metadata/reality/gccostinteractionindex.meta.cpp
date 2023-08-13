#include "gccostinteractionindex.meta.h"

void cGcCostInteractionIndex::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30783600);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostInteractionIndex::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30786240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostInteractionIndex::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30787280);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

