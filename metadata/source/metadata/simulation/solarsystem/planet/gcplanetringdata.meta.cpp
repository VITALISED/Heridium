#include "gcplanetringdata.meta.h"

void cGcPlanetRingData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23993824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetRingData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23996368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetRingData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

