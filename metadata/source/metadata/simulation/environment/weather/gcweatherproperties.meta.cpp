#include "gcweatherproperties.meta.h"

void cGcWeatherProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27045504);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27048160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048944);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

