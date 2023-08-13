#include "gcpunctuationdelay.meta.h"

void cGcPunctuationDelay::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31421824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPunctuationDelay::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425344);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPunctuationDelay::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426640);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

