#include "gcpunctuationdelaytable.meta.h"

void cGcPunctuationDelayTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31422400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPunctuationDelayTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425504);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPunctuationDelayTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426736);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

