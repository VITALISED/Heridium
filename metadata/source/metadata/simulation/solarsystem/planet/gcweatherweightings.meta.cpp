#include "gcweatherweightings.meta.h"

void cGcWeatherWeightings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23764672);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherWeightings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23766240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherWeightings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23767088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

