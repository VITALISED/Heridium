#include "gcaccessibleoverride_text.meta.h"

void cGcAccessibleOverride_Text::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31223792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAccessibleOverride_Text::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAccessibleOverride_Text::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31232928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

