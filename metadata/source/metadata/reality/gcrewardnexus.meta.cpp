#include "gcrewardnexus.meta.h"

void cGcRewardNexus::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29799152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardNexus::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29802400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardNexus::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

