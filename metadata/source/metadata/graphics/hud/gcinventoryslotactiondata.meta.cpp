#include "gcinventoryslotactiondata.meta.h"

void cGcInventorySlotActionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31420736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventorySlotActionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425184);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventorySlotActionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426544);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

