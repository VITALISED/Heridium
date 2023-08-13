#include "gccostadvancesettlementbuilding.meta.h"

void cGcCostAdvanceSettlementBuilding::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30779232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostAdvanceSettlementBuilding::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostAdvanceSettlementBuilding::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

