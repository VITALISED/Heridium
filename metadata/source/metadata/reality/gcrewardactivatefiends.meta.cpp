#include "gcrewardactivatefiends.meta.h"

void cGcRewardActivateFiends::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29972064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardActivateFiends::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29978560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardActivateFiends::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

