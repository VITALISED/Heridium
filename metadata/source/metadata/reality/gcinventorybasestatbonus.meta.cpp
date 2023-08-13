#include "gcinventorybasestatbonus.meta.h"

void cGcInventoryBaseStatBonus::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30588336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryBaseStatBonus::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30591040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryBaseStatBonus::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

