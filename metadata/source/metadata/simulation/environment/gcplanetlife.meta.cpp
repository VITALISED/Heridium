#include "gcplanetlife.meta.h"

void cGcPlanetLife::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27235088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetLife::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27236288);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetLife::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

