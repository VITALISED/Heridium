#include "gcfrigatetraiticons.meta.h"

void cGcFrigateTraitIcons::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26475968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateTraitIcons::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateTraitIcons::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

