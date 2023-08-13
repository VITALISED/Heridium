#include "gcweathereffecttable.meta.h"

void cGcWeatherEffectTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27044928);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherEffectTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27048000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherEffectTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

