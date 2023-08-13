#include "gccostnpchabitation.meta.h"

void cGcCostNPCHabitation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30679136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostNPCHabitation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostNPCHabitation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687808);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

