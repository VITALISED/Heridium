#include "gcdiscoveryworth.meta.h"

void cGcDiscoveryWorth::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30584608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDiscoveryWorth::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDiscoveryWorth::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591776);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

