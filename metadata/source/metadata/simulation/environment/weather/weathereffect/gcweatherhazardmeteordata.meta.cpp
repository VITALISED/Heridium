#include "gcweatherhazardmeteordata.meta.h"

void cGcWeatherHazardMeteorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26924560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherHazardMeteorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26927440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherHazardMeteorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

