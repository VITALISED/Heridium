#include "gcinventorylayoutsizetype.meta.h"

void cGcInventoryLayoutSizeType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30466192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryLayoutSizeType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryLayoutSizeType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

