#include "gcplanetskyproperties.meta.h"

void cGcPlanetSkyProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27118096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetSkyProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124016);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetSkyProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27124976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

