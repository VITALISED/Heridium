#include "gcaccessibleoverride_layout.meta.h"

void cGcAccessibleOverride_Layout::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31223568);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAccessibleOverride_Layout::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAccessibleOverride_Layout::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31232880);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

