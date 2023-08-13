#include "gcrewardmodifystat.meta.h"

void cGcRewardModifyStat::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29796528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardModifyStat::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29801840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardModifyStat::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

