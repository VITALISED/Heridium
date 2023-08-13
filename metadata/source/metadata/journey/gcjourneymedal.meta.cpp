#include "gcjourneymedal.meta.h"

void cGcJourneyMedal::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30993024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcJourneyMedal::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcJourneyMedal::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000720);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

