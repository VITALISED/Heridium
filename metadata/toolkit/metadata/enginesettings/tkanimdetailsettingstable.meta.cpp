#include "tkanimdetailsettingstable.meta.h"

void cTkAnimDetailSettingsTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22143296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimDetailSettingsTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147168);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimDetailSettingsTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

