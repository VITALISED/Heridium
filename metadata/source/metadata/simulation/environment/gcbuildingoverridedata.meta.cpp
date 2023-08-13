#include "gcbuildingoverridedata.meta.h"

void cGcBuildingOverrideData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27338384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingOverrideData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingOverrideData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

