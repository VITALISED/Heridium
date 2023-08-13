#include "gcbuildingclusterlayout.meta.h"

void cGcBuildingClusterLayout::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27335616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingClusterLayout::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27340800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingClusterLayout::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

