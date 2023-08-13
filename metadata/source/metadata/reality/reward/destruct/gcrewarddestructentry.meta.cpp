#include "gcrewarddestructentry.meta.h"

void cGcRewardDestructEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28983600);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardDestructEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987792);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardDestructEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

