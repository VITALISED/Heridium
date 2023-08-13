#include "gcbuildingfilenamelist.meta.h"

void cGcBuildingFilenameList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27338064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingFilenameList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingFilenameList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

