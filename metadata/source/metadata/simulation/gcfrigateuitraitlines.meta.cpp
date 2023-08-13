#include "gcfrigateuitraitlines.meta.h"

void cGcFrigateUITraitLines::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26477536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateUITraitLines::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateUITraitLines::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481888);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

