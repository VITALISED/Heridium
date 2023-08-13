#include "gcoutsnapsocketcondition.meta.h"

void cGcOutSnapSocketCondition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34210096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcOutSnapSocketCondition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34212848);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcOutSnapSocketCondition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34214016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

