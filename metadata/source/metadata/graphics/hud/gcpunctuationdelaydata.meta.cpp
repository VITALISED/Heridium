#include "gcpunctuationdelaydata.meta.h"

void cGcPunctuationDelayData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31422112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPunctuationDelayData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425424);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPunctuationDelayData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426688);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

