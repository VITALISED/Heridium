#include "gcfreighterdungeonparams.meta.h"

void cGcFreighterDungeonParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26472672);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterDungeonParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterDungeonParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

