#include "gcrewardpirateattack.meta.h"

void cGcRewardPirateAttack::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29709888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardPirateAttack::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29717344);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardPirateAttack::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29719168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

