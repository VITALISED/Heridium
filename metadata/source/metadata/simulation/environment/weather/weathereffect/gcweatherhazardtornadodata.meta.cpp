#include "gcweatherhazardtornadodata.meta.h"

void cGcWeatherHazardTornadoData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26924992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherHazardTornadoData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26927520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherHazardTornadoData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

