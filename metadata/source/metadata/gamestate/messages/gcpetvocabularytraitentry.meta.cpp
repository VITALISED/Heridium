#include "gcpetvocabularytraitentry.meta.h"

void cGcPetVocabularyTraitEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33119408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetVocabularyTraitEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetVocabularyTraitEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

