#include "gcpetvocabularywords.meta.h"

void cGcPetVocabularyWords::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33119712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetVocabularyWords::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetVocabularyWords::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

