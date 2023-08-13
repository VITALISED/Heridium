#include "gcbuildingplacementerrortypes.meta.h"

void cGcBuildingPlacementErrorTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34204400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingPlacementErrorTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34211648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingPlacementErrorTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213296);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

