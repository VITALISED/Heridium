#include "gcwondercreaturecategory.meta.h"

void cGcWonderCreatureCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22499216);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderCreatureCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderCreatureCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506496);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

