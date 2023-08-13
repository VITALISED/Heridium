#include "gccostjourneystatlevel.meta.h"

void cGcCostJourneyStatLevel::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30677344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostJourneyStatLevel::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostJourneyStatLevel::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687568);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

