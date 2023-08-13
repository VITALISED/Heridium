#include "gcplanetsentineldata.meta.h"

void cGcPlanetSentinelData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23862080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetSentinelData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23868352);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetSentinelData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23869840);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

