#include "gcquickmenuactions.meta.h"

void cGcQuickMenuActions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23067200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcQuickMenuActions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069824);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcQuickMenuActions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070944);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

