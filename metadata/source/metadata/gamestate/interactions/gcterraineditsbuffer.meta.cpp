#include "gcterraineditsbuffer.meta.h"

void cGcTerrainEditsBuffer::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33122160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTerrainEditsBuffer::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123856);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTerrainEditsBuffer::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

