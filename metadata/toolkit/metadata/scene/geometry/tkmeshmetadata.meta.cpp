#include "tkmeshmetadata.meta.h"

void cTkMeshMetaData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21934944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMeshMetaData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21937136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMeshMetaData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21938112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

