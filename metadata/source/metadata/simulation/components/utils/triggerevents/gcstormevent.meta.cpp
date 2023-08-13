#include "gcstormevent.meta.h"

void cGcStormEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28403616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStormEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28405296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStormEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28406240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

