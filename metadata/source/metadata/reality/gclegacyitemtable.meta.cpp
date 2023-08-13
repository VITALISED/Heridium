#include "gclegacyitemtable.meta.h"

void cGcLegacyItemTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30350048);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcLegacyItemTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30356880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcLegacyItemTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30358480);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

