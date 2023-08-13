#include "gcinventoryclasscostmultiplier.meta.h"

void cGcInventoryClassCostMultiplier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26477872);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryClassCostMultiplier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryClassCostMultiplier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481936);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

