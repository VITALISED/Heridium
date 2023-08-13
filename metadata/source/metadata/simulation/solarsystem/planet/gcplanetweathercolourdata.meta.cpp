#include "gcplanetweathercolourdata.meta.h"

void cGcPlanetWeatherColourData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23864432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetWeatherColourData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23868832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetWeatherColourData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

