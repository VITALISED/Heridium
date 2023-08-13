#include "gcrewarddummylocid.meta.h"

void cGcRewardDummyLocID::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29878768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardDummyLocID::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29885312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardDummyLocID::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

