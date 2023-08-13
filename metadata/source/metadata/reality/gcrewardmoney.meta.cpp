#include "gcrewardmoney.meta.h"

void cGcRewardMoney::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29797088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardMoney::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29801920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardMoney::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803424);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

