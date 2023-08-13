#include "gcjourneymilestonetable.meta.h"

void cGcJourneyMilestoneTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33019584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcJourneyMilestoneTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33024992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcJourneyMilestoneTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

