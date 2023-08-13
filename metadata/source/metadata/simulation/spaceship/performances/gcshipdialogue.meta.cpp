#include "gcshipdialogue.meta.h"

void cGcShipDialogue::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23477328);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipDialogue::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23481072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipDialogue::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23482160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

