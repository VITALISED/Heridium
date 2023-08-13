#include "gcrewardhealth.meta.h"

void cGcRewardHealth::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29883952);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardHealth::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29886752);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardHealth::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

