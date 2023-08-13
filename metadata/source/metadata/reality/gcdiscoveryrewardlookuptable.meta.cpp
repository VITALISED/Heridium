#include "gcdiscoveryrewardlookuptable.meta.h"

void cGcDiscoveryRewardLookupTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30584032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDiscoveryRewardLookupTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDiscoveryRewardLookupTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591680);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

