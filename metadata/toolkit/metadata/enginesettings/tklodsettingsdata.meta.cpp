#include "tklodsettingsdata.meta.h"

void cTkLODSettingsData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22146448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLODSettingsData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLODSettingsData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148496);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

