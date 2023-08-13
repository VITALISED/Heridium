#include "tkenginesettingsmapping.meta.h"

void cTkEngineSettingsMapping::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22144240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkEngineSettingsMapping::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkEngineSettingsMapping::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

