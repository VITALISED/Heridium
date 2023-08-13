#include "gcdeathquote.meta.h"

void cGcDeathQuote::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30581888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDeathQuote::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30589520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDeathQuote::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591392);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

