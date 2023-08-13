#include "gcatlasbase.meta.h"

void cGcAtlasBase::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35106208);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtlasBase::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35110608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAtlasBase::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111584);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

