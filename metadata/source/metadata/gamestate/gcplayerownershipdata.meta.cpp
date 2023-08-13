#include "gcplayerownershipdata.meta.h"

void cGcPlayerOwnershipData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33788704);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerOwnershipData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33790768);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerOwnershipData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33791664);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

