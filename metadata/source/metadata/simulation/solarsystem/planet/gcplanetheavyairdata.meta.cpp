#include "gcplanetheavyairdata.meta.h"

void cGcPlanetHeavyAirData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23992912);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetHeavyAirData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23996208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetHeavyAirData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

