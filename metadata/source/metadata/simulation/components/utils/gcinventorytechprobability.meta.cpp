#include "gcinventorytechprobability.meta.h"

void cGcInventoryTechProbability::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28601088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryTechProbability::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28605408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryTechProbability::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

