#include "gcpetvocabularyentry.meta.h"

void cGcPetVocabularyEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33119072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetVocabularyEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetVocabularyEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

