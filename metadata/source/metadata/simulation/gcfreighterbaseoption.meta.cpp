#include "gcfreighterbaseoption.meta.h"

void cGcFreighterBaseOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26471824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterBaseOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterBaseOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

