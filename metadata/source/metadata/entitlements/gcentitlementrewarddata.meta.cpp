#include "gcentitlementrewarddata.meta.h"

void cGcEntitlementRewardData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34849264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcEntitlementRewardData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851712);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcEntitlementRewardData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

