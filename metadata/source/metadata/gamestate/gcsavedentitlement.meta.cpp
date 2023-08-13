#include "gcsavedentitlement.meta.h"

void cGcSavedEntitlement::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33343088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSavedEntitlement::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33346912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSavedEntitlement::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33347616);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

