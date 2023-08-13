#include "gcplanethazarddata.meta.h"

void cGcPlanetHazardData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23992576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetHazardData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23996128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetHazardData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

