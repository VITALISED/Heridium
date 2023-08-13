#include "tkmaterialmetadata.meta.h"

void cTkMaterialMetaData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21245168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialMetaData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21247104);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMaterialMetaData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21247488);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

