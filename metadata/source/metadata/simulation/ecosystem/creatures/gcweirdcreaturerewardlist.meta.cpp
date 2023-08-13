#include "gcweirdcreaturerewardlist.meta.h"

void cGcWeirdCreatureRewardList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27763136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeirdCreatureRewardList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeirdCreatureRewardList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27765232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

