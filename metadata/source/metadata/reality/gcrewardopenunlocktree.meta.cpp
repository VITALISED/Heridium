#include "gcrewardopenunlocktree.meta.h"

void cGcRewardOpenUnlockTree::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29800464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardOpenUnlockTree::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29802720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardOpenUnlockTree::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29804000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

