#include "gcanimframeevent.meta.h"

void cGcAnimFrameEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28397312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAnimFrameEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28403856);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAnimFrameEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28405376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

