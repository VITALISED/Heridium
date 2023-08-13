#include "gcrewardmultispecificitems.meta.h"

void cGcRewardMultiSpecificItems::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29797584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardMultiSpecificItems::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29802000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardMultiSpecificItems::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803472);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

