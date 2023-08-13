#include "gcplanetcolourdata.meta.h"

void cGcPlanetColourData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23989808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetColourData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23995728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetColourData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23996880);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

