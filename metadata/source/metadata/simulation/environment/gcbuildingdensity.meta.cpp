#include "gcbuildingdensity.meta.h"

void cGcBuildingDensity::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27336768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingDensity::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingDensity::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

