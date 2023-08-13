#include "gcfreighternpctype.meta.h"

void cGcFreighterNPCType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34072736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterNPCType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076752);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterNPCType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34077936);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

