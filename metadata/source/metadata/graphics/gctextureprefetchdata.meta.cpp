#include "gctextureprefetchdata.meta.h"

void cGcTexturePrefetchData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31505088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTexturePrefetchData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31507296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTexturePrefetchData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31508304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

