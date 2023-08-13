#include "gcatlasbasequery.meta.h"

void cGcAtlasBaseQuery::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35106544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtlasBaseQuery::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35110688);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAtlasBaseQuery::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111632);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

