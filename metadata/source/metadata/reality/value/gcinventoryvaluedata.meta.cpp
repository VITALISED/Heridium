#include "gcinventoryvaluedata.meta.h"

void cGcInventoryValueData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28981792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryValueData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryValueData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

