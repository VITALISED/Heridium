#include "gcrewardspecifictech.meta.h"

void cGcRewardSpecificTech::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29526112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSpecificTech::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29530896);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSpecificTech::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29532048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

