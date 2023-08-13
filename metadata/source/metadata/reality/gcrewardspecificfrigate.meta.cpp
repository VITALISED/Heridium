#include "gcrewardspecificfrigate.meta.h"

void cGcRewardSpecificFrigate::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29626224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSpecificFrigate::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29630048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSpecificFrigate::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29631504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

