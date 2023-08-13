#include "gcdiscoverytype.meta.h"

void cGcDiscoveryType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30584288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDiscoveryType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDiscoveryType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

