#include "gcatlasdiscoverymetadata.meta.h"

void cGcAtlasDiscoveryMetadata::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35108064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtlasDiscoveryMetadata::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35111008);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAtlasDiscoveryMetadata::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

