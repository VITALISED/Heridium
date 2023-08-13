#include "tkplatformbuttonpair.meta.h"

void cTkPlatformButtonPair::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21096912);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkPlatformButtonPair::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkPlatformButtonPair::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

