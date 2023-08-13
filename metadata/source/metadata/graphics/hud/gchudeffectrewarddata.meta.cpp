#include "gchudeffectrewarddata.meta.h"

void cGcHUDEffectRewardData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31417632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHUDEffectRewardData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31424544);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHUDEffectRewardData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

