#include "gcscannerbuildingicontypes.meta.h"

void cGcScannerBuildingIconTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31422768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScannerBuildingIconTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425584);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScannerBuildingIconTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

