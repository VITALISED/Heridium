#include "gcrewarddiscoverrune.meta.h"

void cGcRewardDiscoverRune::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29877616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardDiscoverRune::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29885072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardDiscoverRune::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

