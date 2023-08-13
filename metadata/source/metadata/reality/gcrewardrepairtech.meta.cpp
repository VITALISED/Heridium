#include "gcrewardrepairtech.meta.h"

void cGcRewardRepairTech::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29714064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardRepairTech::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29718304);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardRepairTech::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29720032);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

