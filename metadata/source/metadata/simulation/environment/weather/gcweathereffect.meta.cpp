#include "gcweathereffect.meta.h"

void cGcWeatherEffect::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27044608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherEffect::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherEffect::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

