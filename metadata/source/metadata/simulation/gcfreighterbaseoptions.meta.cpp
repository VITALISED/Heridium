#include "gcfreighterbaseoptions.meta.h"

void cGcFreighterBaseOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26472128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterBaseOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterBaseOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

