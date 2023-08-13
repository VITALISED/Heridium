#include "gcplanetbuildingdata.meta.h"

void cGcPlanetBuildingData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27234272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetBuildingData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27236128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetBuildingData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

