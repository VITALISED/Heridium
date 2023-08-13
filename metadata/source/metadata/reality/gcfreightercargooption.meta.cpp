#include "gcfreightercargooption.meta.h"

void cGcFreighterCargoOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30586496);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterCargoOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterCargoOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

