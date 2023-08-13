#include "gcplayernearbyevent.meta.h"

void cGcPlayerNearbyEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28403056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerNearbyEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28405136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerNearbyEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28406144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

