#include "gccostjourneymilestone.meta.h"

void cGcCostJourneyMilestone::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30677088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostJourneyMilestone::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostJourneyMilestone::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

