#include "gcinventorycostdataentry.meta.h"

void cGcInventoryCostDataEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30464144);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryCostDataEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryCostDataEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30471904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

