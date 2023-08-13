#include "gcjourneycategorytype.meta.h"

void cGcJourneyCategoryType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30992800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcJourneyCategoryType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcJourneyCategoryType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

