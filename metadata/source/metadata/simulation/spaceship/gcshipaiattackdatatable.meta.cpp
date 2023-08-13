#include "gcshipaiattackdatatable.meta.h"

void cGcShipAIAttackDataTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23555984);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipAIAttackDataTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23557296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipAIAttackDataTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23557840);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

