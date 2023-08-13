#include "gcbuildingdistribution.meta.h"

void cGcBuildingDistribution::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27337328);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingDistribution::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingDistribution::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

