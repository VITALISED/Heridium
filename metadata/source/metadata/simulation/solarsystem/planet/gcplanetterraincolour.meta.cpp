#include "gcplanetterraincolour.meta.h"

void cGcPlanetTerrainColour::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23862752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetTerrainColour::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23868512);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetTerrainColour::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23869936);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

