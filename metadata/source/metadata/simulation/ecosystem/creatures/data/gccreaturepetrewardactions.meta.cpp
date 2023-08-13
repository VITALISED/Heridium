#include "gccreaturepetrewardactions.meta.h"

void cGcCreaturePetRewardActions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28065840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreaturePetRewardActions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28068256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreaturePetRewardActions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28069248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

