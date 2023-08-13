#include "gcalienspeechentry.meta.h"

void cGcAlienSpeechEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30776752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienSpeechEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienSpeechEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

