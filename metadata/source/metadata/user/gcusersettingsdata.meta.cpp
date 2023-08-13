#include "gcusersettingsdata.meta.h"

void cGcUserSettingsData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22725200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUserSettingsData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22727104);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUserSettingsData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22727760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

