#include "gcplayercontrolinput.meta.h"

void cGcPlayerControlInput::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28982208);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerControlInput::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987552);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerControlInput::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

