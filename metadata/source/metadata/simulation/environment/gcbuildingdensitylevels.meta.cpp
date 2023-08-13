#include "gcbuildingdensitylevels.meta.h"

void cGcBuildingDensityLevels::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27337008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingDensityLevels::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingDensityLevels::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

