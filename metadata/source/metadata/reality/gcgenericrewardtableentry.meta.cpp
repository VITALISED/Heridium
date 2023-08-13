#include "gcgenericrewardtableentry.meta.h"

void cGcGenericRewardTableEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30587712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGenericRewardTableEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGenericRewardTableEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

