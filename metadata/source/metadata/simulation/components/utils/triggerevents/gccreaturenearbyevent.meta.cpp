#include "gccreaturenearbyevent.meta.h"

void cGcCreatureNearbyEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28398016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureNearbyEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28404016);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureNearbyEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28405472);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

