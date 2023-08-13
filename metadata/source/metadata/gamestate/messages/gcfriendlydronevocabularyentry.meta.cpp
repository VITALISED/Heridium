#include "gcfriendlydronevocabularyentry.meta.h"

void cGcFriendlyDroneVocabularyEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33117280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFriendlyDroneVocabularyEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33122576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFriendlyDroneVocabularyEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33123984);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

