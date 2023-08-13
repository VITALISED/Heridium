#include "gcexpeditionrewardtable.meta.h"

void cGcExpeditionRewardTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30586240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExpeditionRewardTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExpeditionRewardTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

