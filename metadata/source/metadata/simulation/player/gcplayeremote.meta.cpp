#include "gcplayeremote.meta.h"

void cGcPlayerEmote::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24596592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerEmote::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24601568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerEmote::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24602672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

