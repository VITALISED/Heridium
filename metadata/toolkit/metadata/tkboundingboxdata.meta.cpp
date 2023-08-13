#include "tkboundingboxdata.meta.h"

void cTkBoundingBoxData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21595968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBoundingBoxData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21602848);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBoundingBoxData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21604608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

