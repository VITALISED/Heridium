#include "gctiletypeset.meta.h"

void cGcTileTypeSet::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27123344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTileTypeSet::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124896);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTileTypeSet::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

