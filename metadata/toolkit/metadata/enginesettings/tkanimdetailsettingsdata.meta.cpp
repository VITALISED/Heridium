#include "tkanimdetailsettingsdata.meta.h"

void cTkAnimDetailSettingsData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22143008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimDetailSettingsData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147088);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimDetailSettingsData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

