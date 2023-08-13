#include "gccreaturediscoverythumbnailoverride.meta.h"

void cGcCreatureDiscoveryThumbnailOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24712480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureDiscoveryThumbnailOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24719600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureDiscoveryThumbnailOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

