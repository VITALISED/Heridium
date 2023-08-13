#include "gcjourneymedaltiers.meta.h"

void cGcJourneyMedalTiers::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30993424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcJourneyMedalTiers::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcJourneyMedalTiers::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

