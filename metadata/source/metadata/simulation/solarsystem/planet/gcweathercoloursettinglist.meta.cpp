#include "gcweathercoloursettinglist.meta.h"

void cGcWeatherColourSettingList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23764112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherColourSettingList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23766080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherColourSettingList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

