#include "gcrewardspecificspecial.meta.h"

void cGcRewardSpecificSpecial::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29525120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSpecificSpecial::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29530736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSpecificSpecial::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29531952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

