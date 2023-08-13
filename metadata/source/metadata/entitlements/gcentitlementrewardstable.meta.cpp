#include "gcentitlementrewardstable.meta.h"

void cGcEntitlementRewardsTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34849632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcEntitlementRewardsTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851792);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcEntitlementRewardsTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

