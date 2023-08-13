#include "gcroomsequencerule.meta.h"

void cGcRoomSequenceRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26311392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRoomSequenceRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRoomSequenceRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314352);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

