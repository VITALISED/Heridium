#include "gcsubstancesecondary.meta.h"

void cGcSubstanceSecondary::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29339808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSubstanceSecondary::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSubstanceSecondary::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29343040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

