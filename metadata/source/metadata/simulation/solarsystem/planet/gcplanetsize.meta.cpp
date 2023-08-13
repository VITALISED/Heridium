#include "gcplanetsize.meta.h"

void cGcPlanetSize::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23862432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetSize::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23868432);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetSize::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23869888);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

