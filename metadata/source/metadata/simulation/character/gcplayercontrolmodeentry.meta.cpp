#include "gcplayercontrolmodeentry.meta.h"

void cGcPlayerControlModeEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28982480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerControlModeEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987632);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerControlModeEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

