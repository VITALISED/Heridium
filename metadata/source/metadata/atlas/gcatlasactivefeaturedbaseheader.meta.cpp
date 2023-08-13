#include "gcatlasactivefeaturedbaseheader.meta.h"

void cGcAtlasActiveFeaturedBaseHeader::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35105920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtlasActiveFeaturedBaseHeader::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35110528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAtlasActiveFeaturedBaseHeader::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111536);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

