#include "gccostbuildingparts.meta.h"

void cGcCostBuildingParts::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30779824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostBuildingParts::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30785120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostBuildingParts::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786944);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

