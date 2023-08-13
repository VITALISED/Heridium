#include "gcsolarsystemlocator.meta.h"

void cGcSolarSystemLocator::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24121600);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSolarSystemLocator::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24124384);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSolarSystemLocator::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

