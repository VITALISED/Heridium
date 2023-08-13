#include "gcbeenshotevent.meta.h"

void cGcBeenShotEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28397632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBeenShotEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28403936);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBeenShotEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28405424);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

