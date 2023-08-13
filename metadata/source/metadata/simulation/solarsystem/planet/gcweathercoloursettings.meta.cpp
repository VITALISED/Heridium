#include "gcweathercoloursettings.meta.h"

void cGcWeatherColourSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23764368);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherColourSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23766160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherColourSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23767040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

