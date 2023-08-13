#include "gcplayertitledata.meta.h"

void cGcPlayerTitleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30354976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerTitleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30358080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerTitleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359200);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

