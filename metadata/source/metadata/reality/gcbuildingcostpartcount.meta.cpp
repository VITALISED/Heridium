#include "gcbuildingcostpartcount.meta.h"

void cGcBuildingCostPartCount::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30778080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingCostPartCount::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingCostPartCount::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

