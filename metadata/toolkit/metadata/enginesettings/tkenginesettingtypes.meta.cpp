#include "tkenginesettingtypes.meta.h"

void cTkEngineSettingTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22143920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkEngineSettingTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkEngineSettingTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

