#include "gcjourneymilestonedata.meta.h"

void cGcJourneyMilestoneData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33019216);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcJourneyMilestoneData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33024912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcJourneyMilestoneData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

