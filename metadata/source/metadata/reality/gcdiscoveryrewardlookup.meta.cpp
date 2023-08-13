#include "gcdiscoveryrewardlookup.meta.h"

void cGcDiscoveryRewardLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30583632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDiscoveryRewardLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30589920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDiscoveryRewardLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591632);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

