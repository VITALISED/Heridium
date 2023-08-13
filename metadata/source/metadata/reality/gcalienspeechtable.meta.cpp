#include "gcalienspeechtable.meta.h"

void cGcAlienSpeechTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30777120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienSpeechTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienSpeechTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

