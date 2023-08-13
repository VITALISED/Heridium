#include "gcdiscoveryhelpertimings.meta.h"

void cGcDiscoveryHelperTimings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31415792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDiscoveryHelperTimings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31424064);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDiscoveryHelperTimings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31425872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

