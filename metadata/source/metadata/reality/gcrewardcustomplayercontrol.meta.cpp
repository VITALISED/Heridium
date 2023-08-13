#include "gcrewardcustomplayercontrol.meta.h"

void cGcRewardCustomPlayerControl::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29976800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardCustomPlayerControl::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29979760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardCustomPlayerControl::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29981104);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

