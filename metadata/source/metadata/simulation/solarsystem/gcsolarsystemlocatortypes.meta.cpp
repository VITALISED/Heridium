#include "gcsolarsystemlocatortypes.meta.h"

void cGcSolarSystemLocatorTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24122384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSolarSystemLocatorTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24124544);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSolarSystemLocatorTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

