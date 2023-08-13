#include "gcseasonalmilestone.meta.h"

void cGcSeasonalMilestone::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33344608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonalMilestone::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33347072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSeasonalMilestone::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33347712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

