#include "gcplayeremotelist.meta.h"

void cGcPlayerEmoteList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24597056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerEmoteList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24601648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerEmoteList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24602720);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

