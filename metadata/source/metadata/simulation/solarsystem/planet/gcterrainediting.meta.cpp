#include "gcterrainediting.meta.h"

void cGcTerrainEditing::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23762368);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTerrainEditing::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23765600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTerrainEditing::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

