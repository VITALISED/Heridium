#include "gcweathercolourmodifiers.meta.h"

void cGcWeatherColourModifiers::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27044208);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherColourModifiers::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherColourModifiers::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

