#include "gcperformanceflyby.meta.h"

void cGcPerformanceFlyby::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30895680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPerformanceFlyby::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897712);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPerformanceFlyby::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898384);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

