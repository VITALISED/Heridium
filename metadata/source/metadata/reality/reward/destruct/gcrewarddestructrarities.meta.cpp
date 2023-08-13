#include "gcrewarddestructrarities.meta.h"

void cGcRewardDestructRarities::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28983840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardDestructRarities::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardDestructRarities::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

