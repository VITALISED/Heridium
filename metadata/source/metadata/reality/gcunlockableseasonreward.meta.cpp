#include "gcunlockableseasonreward.meta.h"

void cGcUnlockableSeasonReward::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29090176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUnlockableSeasonReward::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29093808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUnlockableSeasonReward::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29094912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

