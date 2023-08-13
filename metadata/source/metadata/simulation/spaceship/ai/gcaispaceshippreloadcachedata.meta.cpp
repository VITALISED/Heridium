#include "gcaispaceshippreloadcachedata.meta.h"

void cGcAISpaceshipPreloadCacheData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23640400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAISpaceshipPreloadCacheData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23644736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAISpaceshipPreloadCacheData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23645664);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

