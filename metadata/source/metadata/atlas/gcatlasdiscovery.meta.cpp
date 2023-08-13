#include "gcatlasdiscovery.meta.h"

void cGcAtlasDiscovery::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35107296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtlasDiscovery::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35110848);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAtlasDiscovery::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

