#include "gcperformanceguard.meta.h"

void cGcPerformanceGuard::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30896064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPerformanceGuard::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897792);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPerformanceGuard::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898432);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

