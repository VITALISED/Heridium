#include "gcstatgroupdata.meta.h"

void cGcStatGroupData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33022016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatGroupData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025712);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatGroupData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

